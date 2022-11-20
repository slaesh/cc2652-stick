#define _LED_TASK_C_

#include "led_task.h"

#include <assert.h>
#include <pthread.h>
#include <mqueue.h>
#include <ti/drivers/SPI.h>
#include <ti/drivers/PIN.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Clock.h>

PIN_Handle hLedPins;
PIN_State LedPinState;

#define GPIO_LED_ORANGE (6)
#define GPIO_LED_BLUE (7)

#define TASK_STARTUP_DELAY_IN_MS (2000)
#define LED_TOGGLE_TIME_IN_MS (500)

PIN_Config LedPinTable[] = {
	GPIO_LED_ORANGE | PIN_GPIO_OUTPUT_EN | PIN_GPIO_HIGH | PIN_PUSHPULL | PIN_DRVSTR_MAX,
	GPIO_LED_BLUE   | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW  | PIN_PUSHPULL | PIN_DRVSTR_MAX,
	PIN_TERMINATE /* Terminate list */
};

void initPins() {
	hLedPins = PIN_open(&LedPinState, LedPinTable);
}

uint32_t millis() {
	return (Clock_getTicks() * Clock_tickPeriod) / 1000;
}

void toggleLed(PIN_Handle pinHandle, uint8_t pinId) {
	uint32_t ledstate = PIN_getOutputValue(PIN_ID(pinId));
	PIN_setOutputValue(pinHandle, PIN_ID(pinId), !ledstate);
}

void* led_task(void *arg0) {
	Task_sleep(TASK_STARTUP_DELAY_IN_MS * 1000 / Clock_tickPeriod);

	initPins();

	for (;;) {
		toggleLed(hLedPins, GPIO_LED_ORANGE);
		toggleLed(hLedPins, GPIO_LED_BLUE);

		Task_sleep(LED_TOGGLE_TIME_IN_MS * 1000 / Clock_tickPeriod);
	}
}

Task_Struct ledTask_struct;

void ledTask_taskCreate(void) {
#define TASK_CONFIG_LED_TASK_STACK_SIZE 512
	static char stack[TASK_CONFIG_LED_TASK_STACK_SIZE];

    Task_Params taskParams;
    Task_Params_init(&taskParams);
    taskParams.stackSize = TASK_CONFIG_LED_TASK_STACK_SIZE;
    taskParams.stack = &stack;
    taskParams.priority = 1;
    Task_construct(&ledTask_struct, (Task_FuncPtr)led_task, &taskParams, NULL);
}
