/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-I08
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *
 *     MODULE INCLUDES
 *
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/cc26xx/Boot.h>
#include <ti/sysbios/family/arm/cc26xx/Timer.h>
#include <ti/sysbios/family/arm/cc26xx/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/heaps/HeapTrack.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Mailbox.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/rom/cortexm/cc26xx/cc26x2v2/CC26xx.h>
#include <ti/sysbios/rts/gnu/ReentSupport.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysCallback.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

/* suppress 'type qualifier is meaningless on cast type' warning */
#if defined(__ti__) && !defined(__clang__)
#pragma diag_suppress 193
#endif
#ifdef __IAR_SYSTEMS_ICC__
#pragma diag_suppress=Pe191
#endif

#if !(defined(__GNUC__))
#if !(defined(__TI_GNU_ATTRIBUTE_SUPPORT__) || defined(__IAR_SYSTEMS_ICC__)) || defined(__ARP32__)
#define __attribute__(x)
#endif
#endif

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;


/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_cc26xx_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_cc26xx_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_cc26xx_Timer_Module__ ti_sysbios_family_arm_cc26xx_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_cc26xx_Timer_Object__ {
    const ti_sysbios_family_arm_cc26xx_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt32 period;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz frequency;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt64 period64;
    xdc_UInt64 savedCurrCount;
    xdc_UInt64 prevThreshold;
    xdc_UInt64 nextThreshold;
} ti_sysbios_family_arm_cc26xx_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_cc26xx_Timer_Object__ obj;
} ti_sysbios_family_arm_cc26xx_Timer_Object2__;


/*
 * ======== ti.sysbios.family.arm.cc26xx.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapTrack INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapTrack_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapTrack_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapTrack_Module__ ti_sysbios_heaps_HeapTrack_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_heaps_HeapTrack_Object__ {
    const ti_sysbios_heaps_HeapTrack_Fxns__ *__fxns;
    xdc_runtime_IHeap_Handle internalHeap;
    xdc_SizeT size;
    xdc_SizeT peak;
    xdc_SizeT sizeWithoutTracker;
    xdc_SizeT peakWithoutTracker;
    ti_sysbios_knl_Queue_Object__ Object_field_trackQueue;
} ti_sysbios_heaps_HeapTrack_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapTrack_Object__ obj;
} ti_sysbios_heaps_HeapTrack_Object2__;


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_cc26xx_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_cc26xx_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Mailbox_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Mailbox_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Mailbox_Module__ ti_sysbios_knl_Mailbox_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* <-- ti_sysbios_knl_Semaphore_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Mailbox_Object__ {
    xdc_runtime_IHeap_Handle heap;
    xdc_SizeT msgSize;
    xdc_UInt numMsgs;
    xdc_Ptr buf;
    xdc_UInt numFreeMsgs;
    __TA_ti_sysbios_knl_Mailbox_Instance_State__allocBuf allocBuf;
    ti_sysbios_knl_Queue_Object__ Object_field_dataQue;
    ti_sysbios_knl_Queue_Object__ Object_field_freeQue;
    ti_sysbios_knl_Semaphore_Object__ Object_field_dataSem;
    ti_sysbios_knl_Semaphore_Object__ Object_field_freeSem;
} ti_sysbios_knl_Mailbox_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Mailbox_Object__ obj;
} ti_sysbios_knl_Mailbox_Object2__;


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.cc26x2v2.CC26xx INTERNALS ========
 */


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysCallback INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C __attribute__ ((section (".rodata_xdc_runtime_ITimestampClient_Interface__BASE__C")));
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C __attribute__ ((section (".rodata_xdc_runtime_ISystemSupport_Interface__BASE__C")));
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C __attribute__ ((section (".rodata_ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C")));
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C")));
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    &ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x26, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */



/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */



/*
 * ======== ti.sysbios.heaps.HeapTrack VTABLE ========
 */



/*
 * ======== xdc.runtime.SysCallback VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysCallback_Fxns__ xdc_runtime_SysCallback_Module__FXNS__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__FXNS__C")));
const xdc_runtime_SysCallback_Fxns__ xdc_runtime_SysCallback_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysCallback_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysCallback_abort__E,
    xdc_runtime_SysCallback_exit__E,
    xdc_runtime_SysCallback_flush__E,
    xdc_runtime_SysCallback_putch__E,
    xdc_runtime_SysCallback_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0xd, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__FXNS__C")));
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0xe, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__FXNS__C")));
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    &xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x10, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int f_arg0);

/* Module__state__V */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_cc26xx_Timer_Object__ ti_sysbios_family_arm_cc26xx_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_cc26xx_Timer_Module_State__ {
    xdc_UInt availMask;
    ti_sysbios_family_arm_cc26xx_Timer_Handle handle;
} ti_sysbios_family_arm_cc26xx_Timer_Module_State__;

/* Module__state__V */


/*
 * ======== ti.sysbios.family.arm.cc26xx.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_cc26xx_Timer_Handle timer;
} ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__;

/* Module__state__V */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;

/* Module__state__V */

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restore__E */
extern xdc_Void ti_sysbios_knl_Swi_restore__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];

/* --> __primary_heap_start__ */
extern xdc_Char* __primary_heap_start__;

/* --> __primary_heap_end__ */
extern xdc_Char* __primary_heap_end__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapTrack DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    volatile xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg f_arg0);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> Power_idleFunc */
extern xdc_Void Power_idleFunc(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6];

/* Module__state__V */

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((section(".bss"), aligned(8)));
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    volatile xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[4];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.cc26x2v2.CC26xx DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_rts_gnu_ReentSupport_Module_State__ {
    xdc_Int taskHId;
    ti_sysbios_knl_Semaphore_Handle lock;
} ti_sysbios_rts_gnu_ReentSupport_Module_State__;

/* Module__state__V */
ti_sysbios_rts_gnu_ReentSupport_Module_State__ ti_sysbios_rts_gnu_ReentSupport_Module__state__V;


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Mailbox_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Mailbox_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_cc26xx_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_cc26xx_Timer_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_rts_gnu_ReentSupport_Module_startup__E */
extern xdc_Int ti_sysbios_rts_gnu_ReentSupport_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11];


/*
 * ======== xdc.runtime.SysCallback DECLARATIONS ========
 */

/* --> xdc_runtime_SysCallback_defaultAbort */
extern xdc_Void xdc_runtime_SysCallback_defaultAbort(xdc_CString f_arg0);

/* --> xdc_runtime_SysCallback_defaultExit */
extern xdc_Void xdc_runtime_SysCallback_defaultExit(xdc_Int f_arg0);

/* --> xdc_runtime_SysCallback_defaultFlush */
extern xdc_Void xdc_runtime_SysCallback_defaultFlush(xdc_Void);

/* --> xdc_runtime_SysCallback_defaultPutch */
extern xdc_Void xdc_runtime_SysCallback_defaultPutch(xdc_Char f_arg0);

/* --> xdc_runtime_SysCallback_defaultReady */
extern xdc_Bool xdc_runtime_SysCallback_defaultReady(xdc_Void);


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char* f_arg0,xdc_UInt f_arg1);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2];

/* Module__state__V */

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char** f_arg0,xdc_CString* f_arg1,xdc_VaList* f_arg2,xdc_runtime_System_ParseData* f_arg3);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_CPtr charBase;
    xdc_CPtr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[1];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[1];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */



/*
 * ======== OBJECT OFFSETS ========
 */

const xdc_SizeT ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue__O __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue__O")));
__FAR__ const xdc_SizeT ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue__O = offsetof(ti_sysbios_heaps_HeapTrack_Object__,Object_field_trackQueue);


/*
 * ======== OBJECT OFFSETS ========
 */



/*
 * ======== OBJECT OFFSETS ========
 */



/*
 * ======== OBJECT OFFSETS ========
 */



/*
 * ======== OBJECT OFFSETS ========
 */



/*
 * ======== OBJECT OFFSETS ========
 */

const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module_State_terminatedQ__O")));
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = /home/sascha/workspace_ccs/4.2.00.35/blinky/Debug/configPkg/package/cfg/blinky_pm4fg");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.simplelink");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = gnu.targets.arm.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = xdc.targets.omf.Elf");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Error TEMPLATE ========
 */


xdc_runtime_Error_Block xdc_runtime_Error_IgnoreBlock = {
    (unsigned short)(~0U), /* unused */
    {
        {0, 0} /* data */
    },
    0,  /* id */
    NULL,  /* msg */
    {
        0,  /* mod */
        NULL,  /* file */
        0   /* line */
    }
};

/*
 *  ======== Error_policyLog ========
 */
Void xdc_runtime_Error_policyLog__I(xdc_runtime_Types_ModuleId mod,
    CString file, Int line, CString msg, IArg arg1, IArg arg2)
{
}

/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
/* REQ_TAG(SYSBIOS-953) */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0);
}
xdc_Bool ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0);
}


xdc_Int xdc_runtime_Startup_getState__I(xdc_runtime_Types_ModuleId id) {
    switch (id) {
        case 12:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[0]);
        case 23:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[2]);
        case 27:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[3]);
        case 30:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[4]);
        case 31:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[5]);
        case 37:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[6]);
        case 41:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[7]);
        case 42:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[8]);
        case 43:
            return ((&xdc_runtime_Startup_Module__state__V)->stateTab[9]);
    }
    return (0);
}

/*
 * Startup_exec__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * pragma, whole program optimizers would otherwise optimize-out this function.
 */
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((used));

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
/* REQ_TAG(SYSBIOS-949) */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[11];
    xdc_runtime_Startup_startModsFxn__C(state, 11);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/*
 * Startup_reset__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * pragma, whole program optimizers would otherwise optimize-out this function.
 */
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((used));

extern xdc_Void ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_dataInit(void);  /* user defined reset function */
extern xdc_Void ti_sysbios_family_arm_cc26xx_Boot_trimDevice(void);  /* user defined reset function */
extern xdc_Void ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_checkRevision__E(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_dataInit();
    ti_sysbios_family_arm_cc26xx_Boot_trimDevice();
    ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_checkRevision__E();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt,
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;

    /*
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;

    res = 0;

    c = **pfmt;
    *pfmt = *pfmt + 1;


    if (c == '$') {
        c = **pfmt;
        *pfmt = *pfmt + 1;

        if (c == 'L') {
            xdc_runtime_Types_Label *lab = (parse->aFlag == TRUE) ?
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);

            /*
             * Call Text_putLab to write out the label, taking the precision
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field. */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'F') {
            xdc_runtime_Types_Site site;

            /* Retrieve the file name string from the argument list */
            site.file = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Retrieve the line number from the argument list. */
            site.line = (parse->aFlag == TRUE) ?
                (xdc_Int) va_arg(va, xdc_IArg) :
                (xdc_Int) va_arg(va, xdc_Int);

            /*
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;

            /*
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string length.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Update pva before passing it to doPrint. */
            *pva = va;

            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             * System_doPrint guarantees that parse->precis is positive.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, (xdc_SizeT)parse->precis,
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf != NULL) {
                if (res >= parse->precis) {
                    /* Not enough space for all characters, only
                     * (parse->precis - 1) and '\0' were printed.
                     */
                    res = parse->precis - 1;
                }
                *pbuf += res;
            }

            /* Update the temporary variable with any changes to *pva */
            va = *pva;

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }

    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag == TRUE) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining).
     */
    goto end;
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_arm_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_arm_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;

    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || ((xdc_UInt)printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */

/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_runtime_Text_RopeVisitor visFxn, xdc_Ptr visState)
{
    ((xdc_runtime_Text_MatchVisState *)visState)->res = -1;
}

/*
 * ======== ti.platforms.simplelink.Platform TEMPLATE ========
 */


UChar ti_platforms_simplelink_stack[0] __attribute__ ((aligned(8), section (".stack")));

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    ti_sysbios_knl_Clock_logTick__E();

    {
        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int stat);

extern Void ti_sysbios_family_arm_cc26xx_Timer_startup__E(Void);

Void ti_sysbios_BIOS_startFunc__I(Void)
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    (void)xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_family_arm_cc26xx_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}


Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    (void)ti_sysbios_knl_Task_disable();
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* force thread type to 'Main' */
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);


Ptr _intvecs_base_address;
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] __attribute__ ((section (".intvecs"))) = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

Ptr _vtable_base_address;
/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[54] __attribute__((section(".vtable")));

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[54];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
    ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackBase = (Void *)__section_begin("CSTACK");
    size_t size = (uint8_t *)__section_end("CSTACK") - (uint8_t *)__section_begin("CSTACK");
    ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (Void *)size;
}
#endif

/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot TEMPLATE ========
 */


#include <ti/devices/DeviceFamily.h>

#include DeviceFamily_constructPath(inc/hw_types.h)



/* workaround bug in driverlib */

/*
 * ======== ti.sysbios.rom.ROM TEMPLATE ========
 */


/* ROM_ExternFuncPtrs */
#include <xdc/runtime/System.h>
#include <xdc/runtime/Startup.h>
#include <ti/sysbios/family/arm/cc26xx/Timer.h>
#include <ti/sysbios/family/arm/cc26xx/TimestampProvider.h>

typedef struct {
    /*
     *  functions explicitly excluded from the ROM
     */
    xdc_Int (*xdc_runtime_Startup_getState__I)(xdc_runtime_Types_ModuleId);
    xdc_Bool (*xdc_runtime_System_SupportProxy_Module__startupDone__S)(xdc_Void);
    xdc_Void (*xdc_runtime_System_SupportProxy_abort__E)(xdc_CString);
    xdc_Void (*xdc_runtime_System_SupportProxy_exit__E)( xdc_Int);
    xdc_Void (*xdc_runtime_System_SupportProxy_flush__E)(xdc_Void);
    xdc_Void (*xdc_runtime_System_SupportProxy_putch__E)( xdc_Char);
    xdc_Bool (*xdc_runtime_System_SupportProxy_ready__E)(xdc_Void);
    xdc_Void (*ti_sysbios_family_arm_cc26xx_Timer_start__E)(ti_sysbios_family_arm_cc26xx_Timer_Handle);
    xdc_Void (*ti_sysbios_family_arm_cc26xx_Timer_initDevice__I)(ti_sysbios_family_arm_cc26xx_Timer_Object *);
    xdc_Void (*ti_sysbios_family_arm_cc26xx_Timer_setThreshold__I)(ti_sysbios_family_arm_cc26xx_Timer_Object *, xdc_UInt32, xdc_Bool);
    xdc_Void (*ti_sysbios_family_arm_cc26xx_Timer_setNextTick__E)(ti_sysbios_family_arm_cc26xx_Timer_Handle, xdc_UInt32);
    xdc_UInt32 (*ti_sysbios_family_arm_cc26xx_Timer_getMaxTicks__E)(ti_sysbios_family_arm_cc26xx_Timer_Handle);
    xdc_UInt64 (*ti_sysbios_family_arm_cc26xx_Timer_getCount64__E)(ti_sysbios_family_arm_cc26xx_Timer_Object *);
    xdc_Void (*ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E)(xdc_UArg);
    xdc_UInt32 (*ti_sysbios_family_arm_cc26xx_Timer_getCurrentTick__E)(ti_sysbios_family_arm_cc26xx_Timer_Handle, xdc_Bool);
    xdc_UInt32 (*ti_sysbios_family_arm_cc26xx_TimestampProvider_get32__E)(xdc_Void);
    xdc_Void (*xdc_runtime_Error_init__E)(xdc_runtime_Error_Block *);
    xdc_Char * (*xdc_runtime_System_formatNum__I)(xdc_Char *, xdc_UInt32, xdc_Int, xdc_Int);
} ROM_ExternFuncPtrs;

/* xdcRomExternFuncsPtr */
const ROM_ExternFuncPtrs ROM_externFuncPtrs __attribute__ ((section(".const_ROM_externFuncPtrs")));
const ROM_ExternFuncPtrs ROM_externFuncPtrs = {
    xdc_runtime_Startup_getState__I,
    xdc_runtime_System_SupportProxy_Module__startupDone__S,
    xdc_runtime_System_SupportProxy_abort__E,
    xdc_runtime_System_SupportProxy_exit__E,
    xdc_runtime_System_SupportProxy_flush__E,
    xdc_runtime_System_SupportProxy_putch__E,
    xdc_runtime_System_SupportProxy_ready__E,
    ti_sysbios_family_arm_cc26xx_Timer_start__E,
    ti_sysbios_family_arm_cc26xx_Timer_initDevice__I,
    ti_sysbios_family_arm_cc26xx_Timer_setThreshold__I,
    ti_sysbios_family_arm_cc26xx_Timer_setNextTick__E,
    ti_sysbios_family_arm_cc26xx_Timer_getMaxTicks__E,
    ti_sysbios_family_arm_cc26xx_Timer_getCount64__E,
    ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E,
    ti_sysbios_family_arm_cc26xx_Timer_getCurrentTick__E,
    ti_sysbios_family_arm_cc26xx_TimestampProvider_get32__E,
    xdc_runtime_Error_init__E,
    xdc_runtime_System_formatNum__I,
};

/* xdcRomExternFuncsPtr */
const ROM_ExternFuncPtrs *xdcRomExternFuncPtr __attribute__ ((section(".data_xdcRomExternFuncPtr")));
const ROM_ExternFuncPtrs *xdcRomExternFuncPtr = &ROM_externFuncPtrs;



/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.cc26x2v2.CC26xx TEMPLATE ========
 */




/* Inform CC2642.lds to reserve ROM data at 0x20000100 */
char ROM_DATA_SIZE __attribute__((section(".data")));
/* Inform CC2642.lds to reserve ROM rodata at 0x00001000 */
char ROM_RODATA_SIZE __attribute__((section(".data")));

extern unsigned int __sysbios_rom_data_load__;
extern unsigned int __sysbios_rom_data_start__;
extern unsigned int __sysbios_rom_data_end__;

extern unsigned int __sysbios_data_other_load__;
extern unsigned int __sysbios_data_other_start__;
extern unsigned int __sysbios_data_other_end__;

void ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_dataInit()
{
    unsigned int * dl;
    unsigned int * ds;
    unsigned int * de;

    dl = & __sysbios_rom_data_load__;
    ds = & __sysbios_rom_data_start__;
    de = & __sysbios_rom_data_end__;

    while (ds < de) {
        *ds = *dl;
        dl++;
        ds++;
    }

    dl = & __sysbios_data_other_load__;
    ds = & __sysbios_data_other_start__;
    de = & __sysbios_data_other_end__;

    while (ds < de) {
        *ds = *dl;
        dl++;
        ds++;
    }
}

Void ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_badRomRevision__E() __attribute__ ((noinline));
Void ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_badRomRevision__E() {
	/* Loop here forever if application is built with wrong version of ROM image */
        while(1) {
#ifdef __clang__ 
            /* workaround CODEGEN-6288 */
            asm(" nop");
#endif
            ;
        }
}

Void ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_checkRevision__E()
{
    if (*((UInt32 *)(268612608)) != 286529877) {
	ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_badRomRevision__E();
    }
}


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport TEMPLATE ========
 */



/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__) && !defined(__clang__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);
#pragma FUNC_EXT_CALLED(aligned_alloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== ti_sysbios_rts_MemAlloc_alloc ========
 */
static Void *ti_sysbios_rts_MemAlloc_alloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    if (size == 0) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (ti_sysbios_rts_MemAlloc_alloc(size));
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    /* return NULL if size is 0, or alignment is not a power-of-2 */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    xdc_runtime_Error_init(&eb);

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = ti_sysbios_rts_MemAlloc_alloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

/*
 *  ======== aligned_alloc ========
 */
Void ATTRIBUTE *aligned_alloc(SizeT alignment, SizeT size)
{
    Void *retval;

    retval = memalign(alignment, size);

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */


/* Module__diagsEnabled__C */
const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((const CT__ti_sysbios_BIOS_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((const CT__ti_sysbios_BIOS_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((const CT__ti_sysbios_BIOS_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__id__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x23;

/* Module__loggerDefined__C */
const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((const CT__ti_sysbios_BIOS_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Object__count__C")));
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Object__heap__C")));
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_Object__table__C")));
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = NULL;

/* smpEnabled__C */
const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_smpEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_cpuFreq__C")));
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x2dc6c00,  /* lo */
};

/* runtimeCreatesEnabled__C */
const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_runtimeCreatesEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_taskEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_swiEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_clockEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_heapSize__C")));
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_heapSection__C")));
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_heapTrackEnabled__C")));
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_setupSecureContext__C")));
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_useSK__C")));
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C __attribute__ ((section (".rodata_ti_sysbios_BIOS_installedErrorHook__C")));
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((const CT__ti_sysbios_BIOS_installedErrorHook)NULL);


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__id ti_sysbios_family_arm_cc26xx_Boot_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__id__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__id ti_sysbios_family_arm_cc26xx_Boot_Module__id__C = (xdc_Bits16)0x28;

/* Module__loggerDefined__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__count ti_sysbios_family_arm_cc26xx_Boot_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Object__count__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__count ti_sysbios_family_arm_cc26xx_Boot_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__heap ti_sysbios_family_arm_cc26xx_Boot_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Object__heap__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__heap ti_sysbios_family_arm_cc26xx_Boot_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__table ti_sysbios_family_arm_cc26xx_Boot_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Boot_Object__table__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__table ti_sysbios_family_arm_cc26xx_Boot_Object__table__C = NULL;


/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_family_arm_cc26xx_Timer_Params ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C")));
__FAR__ const ti_sysbios_family_arm_cc26xx_Timer_Params ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_cc26xx_Timer_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)NULL),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)NULL),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_cc26xx_Timer_Module__ ti_sysbios_family_arm_cc26xx_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_cc26xx_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_cc26xx_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_cc26xx_Timer_Object__ ti_sysbios_family_arm_cc26xx_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt32)0xa7c5,  /* period */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x10000,  /* lo */
        },  /* frequency */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt64)0xa7c5,  /* period64 */
        (xdc_UInt64)0x0,  /* savedCurrCount */
        (xdc_UInt64)0xa7c5,  /* prevThreshold */
        (xdc_UInt64)0xa7c5,  /* nextThreshold */
    },
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms)NULL);

/* Module__loggerDefined__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__count ti_sysbios_family_arm_cc26xx_Timer_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Object__count__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__count ti_sysbios_family_arm_cc26xx_Timer_Object__count__C = 1;

/* Object__heap__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__heap ti_sysbios_family_arm_cc26xx_Timer_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Object__heap__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__heap ti_sysbios_family_arm_cc26xx_Timer_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_cc26xx_Timer_Object__);

/* Object__table__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__table ti_sysbios_family_arm_cc26xx_Timer_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Object__table__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__table ti_sysbios_family_arm_cc26xx_Timer_Object__table__C = ti_sysbios_family_arm_cc26xx_Timer_Object__table__V;

/* E_invalidTimer__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)30) << 16 | 0U);

/* E_notAvailable__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)31) << 16 | 0U);

/* E_cannotSupport__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)32) << 16 | 0U);

/* anyMask__C */
const CT__ti_sysbios_family_arm_cc26xx_Timer_anyMask ti_sysbios_family_arm_cc26xx_Timer_anyMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_anyMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_Timer_anyMask ti_sysbios_family_arm_cc26xx_Timer_anyMask__C = (xdc_UInt)0x1;


/*
 * ======== ti.sysbios.family.arm.cc26xx.TimestampProvider INITIALIZERS ========
 */


/* Module__diagsEnabled__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id__C = (xdc_Bits16)0x2a;

/* Module__loggerDefined__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table__C = NULL;

/* timerId__C */
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId__C")));
__FAR__ const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C")));
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_cc26xx_Timer_dynamicStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x14,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)NULL),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)NULL),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[] __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A")));
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext* f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext* f_arg0))NULL),  /* [1] */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)NULL);

/* Module__loggerDefined__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)NULL);

/* Object__heap__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Object__heap__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* dispatcherAutoNestingSupport__C */
const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_PRIORITIES__C */
const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_LM_begin__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)32) << 16 | 768);

/* LD_end__C */
const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_LD_end__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)33) << 16 | 512);

/* A_unsupportedMaskingOption__C */
const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* E_badIntNum__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_badIntNum ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_badIntNum ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C = (((xdc_runtime_Error_Id)14) << 16 | 0U);

/* E_exception__C */
const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_E_exception__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)17) << 16 | 0U);

/* excHookFunc__C */
const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_excHookFunc__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)NULL);

/* disablePriority__C */
const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_disablePriority__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* swiDisable__C */
const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_swiDisable__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)(ti_sysbios_knl_Swi_disable__E));

/* swiRestore__C */
const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore ti_sysbios_family_arm_m3_Hwi_swiRestore__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_swiRestore__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore ti_sysbios_family_arm_m3_Hwi_swiRestore__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore)(ti_sysbios_knl_Swi_restore__E));

/* swiRestoreHwi__C */
const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)(ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_taskDisable__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)(ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_Hwi_hooks__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x26;

/* Module__loggerDefined__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = NULL;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__id__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x27;

/* Module__loggerDefined__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Object__count__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_Object__table__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = NULL;

/* defaultStackSize__C */
const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C")));
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Object__PARAMS__C")));
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateHwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gatePrms)NULL);

/* Module__loggerDefined__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Object__count__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Object__heap__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateHwi_Object__table__C")));
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Object__PARAMS__C")));
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateMutex_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gatePrms)NULL);

/* Module__loggerDefined__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Object__count__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Object__heap__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_Object__table__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C __attribute__ ((section (".rodata_ti_sysbios_gates_GateMutex_A_badContext__C")));
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Object__PARAMS__C")));
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__id__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x2b;

/* Module__loggerDefined__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Object__count__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Object__heap__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_Object__table__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = NULL;

/* dispatcherAutoNestingSupport__C */
const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_dispatcherSwiSupport__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_dispatcherTaskSupport__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C __attribute__ ((section (".rodata_ti_sysbios_hal_Hwi_E_stackOverflow__C")));
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)33) << 16 | 0U);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Object__PARAMS__C")));
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)0),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)NULL),  /* next */
            ((xdc_UArg)(0x0)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)NULL);

/* Module__loggerDefined__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)NULL);

/* Object__heap__C */
const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Object__heap__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* A_zeroBlock__C */
const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_A_zeroBlock__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_heapSize__C */
const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_A_heapSize__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_align__C */
const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_A_align__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_invalidFree__C */
const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_A_invalidFree__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* primaryHeapBaseAddr__C */
const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)((void*)&__primary_heap_start__));

/* primaryHeapEndAddr__C */
const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)((void*)&__primary_heap_end__));


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapTrack INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_heaps_HeapTrack_Params ti_sysbios_heaps_HeapTrack_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Object__PARAMS__C")));
__FAR__ const ti_sysbios_heaps_HeapTrack_Params ti_sysbios_heaps_HeapTrack_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapTrack_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapTrack_Object__PARAMS__C.__iprms, /* instance */
    0,  /* heap */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_heaps_HeapTrack_Module__ ti_sysbios_heaps_HeapTrack_Module__root__V = {
    {&ti_sysbios_heaps_HeapTrack_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapTrack_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_heaps_HeapTrack_Module__diagsEnabled ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__diagsEnabled ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_heaps_HeapTrack_Module__diagsIncluded ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__diagsIncluded ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask ti_sysbios_heaps_HeapTrack_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask ti_sysbios_heaps_HeapTrack_Module__diagsMask__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_heaps_HeapTrack_Module__gateObj ti_sysbios_heaps_HeapTrack_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__gateObj ti_sysbios_heaps_HeapTrack_Module__gateObj__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_heaps_HeapTrack_Module__gatePrms ti_sysbios_heaps_HeapTrack_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__gatePrms ti_sysbios_heaps_HeapTrack_Module__gatePrms__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__gatePrms)NULL);

/* Module__loggerDefined__C */
const CT__ti_sysbios_heaps_HeapTrack_Module__loggerDefined ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerDefined ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_heaps_HeapTrack_Module__loggerObj ti_sysbios_heaps_HeapTrack_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerObj ti_sysbios_heaps_HeapTrack_Module__loggerObj__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn0 ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn0 ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn1 ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn1 ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn2 ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn2 ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn4 ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn4 ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn8 ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn8 ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C = ((const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_heaps_HeapTrack_Object__count ti_sysbios_heaps_HeapTrack_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Object__count__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__count ti_sysbios_heaps_HeapTrack_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_heaps_HeapTrack_Object__heap ti_sysbios_heaps_HeapTrack_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Object__heap__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__heap ti_sysbios_heaps_HeapTrack_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_heaps_HeapTrack_Object__sizeof ti_sysbios_heaps_HeapTrack_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__sizeof ti_sysbios_heaps_HeapTrack_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapTrack_Object__);

/* Object__table__C */
const CT__ti_sysbios_heaps_HeapTrack_Object__table ti_sysbios_heaps_HeapTrack_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Object__table__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__table ti_sysbios_heaps_HeapTrack_Object__table__C = NULL;

/* A_nullObject__C */
const CT__ti_sysbios_heaps_HeapTrack_A_nullObject ti_sysbios_heaps_HeapTrack_A_nullObject__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_A_nullObject__C")));
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_nullObject ti_sysbios_heaps_HeapTrack_A_nullObject__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Object__PARAMS__C")));
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)NULL),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0x1,  /* timeout */
        (xdc_UInt32)0x1,  /* currTimeout */
        (xdc_UInt32)0x0,  /* period */
        0,  /* active */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_knl_Clock_triggerFunc__I)),  /* fxn */
        ((xdc_UArg)NULL),  /* arg */
    },
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Clock_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((const CT__ti_sysbios_knl_Clock_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Clock_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x17;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Object__count__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 1;

/* Object__heap__C */
const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_Object__table__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = ti_sysbios_knl_Clock_Object__table__V;

/* LW_delayed__C */
const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_LW_delayed__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)12) << 16 | 1024);

/* LM_tick__C */
const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_LM_tick__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)13) << 16 | 768);

/* LM_begin__C */
const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_LM_begin__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)14) << 16 | 768);

/* A_clockDisabled__C */
const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_A_clockDisabled__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badThreadType__C */
const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_A_badThreadType__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* serviceMargin__C */
const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_serviceMargin__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_tickSource__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* timerId__C */
const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_timerId__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_tickPeriod__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0xa;

/* doTickFunc__C */
const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C __attribute__ ((section (".rodata_ti_sysbios_knl_Clock_doTickFunc__C")));
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((const CT__ti_sysbios_knl_Clock_doTickFunc)(ti_sysbios_knl_Clock_doTick__I));


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Object__PARAMS__C")));
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Event_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((const CT__ti_sysbios_knl_Event_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Event_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x1a;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Event_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Object__count__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_Object__table__C")));
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = NULL;

/* LM_post__C */
const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_LM_post__C")));
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)15) << 16 | 768);

/* LM_pend__C */
const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_LM_pend__C")));
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)16) << 16 | 768);

/* A_nullEventMasks__C */
const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_A_nullEventMasks__C")));
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_nullEventId__C */
const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_A_nullEventId__C")));
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_eventInUse__C */
const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_A_eventInUse__C")));
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badContext__C */
const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_A_badContext__C")));
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_pendTaskDisabled__C */
const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Event_A_pendTaskDisabled__C")));
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[] __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_funcList__A")));
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))(Power_idleFunc)),  /* [0] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[] __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_coreList__A")));
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1] = {
    (xdc_UInt)0x0,  /* [0] */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Idle_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((const CT__ti_sysbios_knl_Idle_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Idle_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x18;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Object__count__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_Object__table__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = NULL;

/* coreList__C */
const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C __attribute__ ((section (".rodata_ti_sysbios_knl_Idle_coreList__C")));
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {1, ((__T1_ti_sysbios_knl_Idle_coreList const  *)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x19;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Object__count__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_knl_Intrinsics_Object__table__C")));
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_knl_Mailbox_Params ti_sysbios_knl_Mailbox_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Object__PARAMS__C")));
__FAR__ const ti_sysbios_knl_Mailbox_Params ti_sysbios_knl_Mailbox_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Mailbox_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Mailbox_Object__PARAMS__C.__iprms, /* instance */
    0,  /* heap */
    0,  /* readerEvent */
    (xdc_UInt)0x1,  /* readerEventId */
    0,  /* writerEvent */
    (xdc_UInt)0x1,  /* writerEventId */
    ((xdc_Ptr)NULL),  /* buf */
    (xdc_UInt)0x0,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Mailbox_Module__ ti_sysbios_knl_Mailbox_Module__root__V = {
    {&ti_sysbios_knl_Mailbox_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Mailbox_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Mailbox_Module__diagsEnabled ti_sysbios_knl_Mailbox_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsEnabled ti_sysbios_knl_Mailbox_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Mailbox_Module__diagsIncluded ti_sysbios_knl_Mailbox_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsIncluded ti_sysbios_knl_Mailbox_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Mailbox_Module__diagsMask ti_sysbios_knl_Mailbox_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsMask ti_sysbios_knl_Mailbox_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Mailbox_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Mailbox_Module__gateObj ti_sysbios_knl_Mailbox_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__gateObj ti_sysbios_knl_Mailbox_Module__gateObj__C = ((const CT__ti_sysbios_knl_Mailbox_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Mailbox_Module__gatePrms ti_sysbios_knl_Mailbox_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__gatePrms ti_sysbios_knl_Mailbox_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Mailbox_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Mailbox_Module__id ti_sysbios_knl_Mailbox_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__id ti_sysbios_knl_Mailbox_Module__id__C = (xdc_Bits16)0x1b;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Mailbox_Module__loggerDefined ti_sysbios_knl_Mailbox_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerDefined ti_sysbios_knl_Mailbox_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Mailbox_Module__loggerObj ti_sysbios_knl_Mailbox_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerObj ti_sysbios_knl_Mailbox_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Mailbox_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0 ti_sysbios_knl_Mailbox_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0 ti_sysbios_knl_Mailbox_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1 ti_sysbios_knl_Mailbox_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1 ti_sysbios_knl_Mailbox_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2 ti_sysbios_knl_Mailbox_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2 ti_sysbios_knl_Mailbox_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4 ti_sysbios_knl_Mailbox_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4 ti_sysbios_knl_Mailbox_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8 ti_sysbios_knl_Mailbox_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8 ti_sysbios_knl_Mailbox_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8)NULL);

/* Object__heap__C */
const CT__ti_sysbios_knl_Mailbox_Object__heap ti_sysbios_knl_Mailbox_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__heap ti_sysbios_knl_Mailbox_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Mailbox_Object__sizeof ti_sysbios_knl_Mailbox_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__sizeof ti_sysbios_knl_Mailbox_Object__sizeof__C = sizeof(ti_sysbios_knl_Mailbox_Object__);

/* A_invalidBufSize__C */
const CT__ti_sysbios_knl_Mailbox_A_invalidBufSize ti_sysbios_knl_Mailbox_A_invalidBufSize__C __attribute__ ((section (".rodata_ti_sysbios_knl_Mailbox_A_invalidBufSize__C")));
__FAR__ const CT__ti_sysbios_knl_Mailbox_A_invalidBufSize ti_sysbios_knl_Mailbox_A_invalidBufSize__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Object__PARAMS__C")));
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Queue_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((const CT__ti_sysbios_knl_Queue_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Queue_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x1c;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn8)NULL);

/* Object__heap__C */
const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Queue_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Object__PARAMS__C")));
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Semaphore_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__id__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x1d;

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Object__count__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_Object__table__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = NULL;

/* LM_post__C */
const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_LM_post__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)17) << 16 | 768);

/* LM_pend__C */
const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_LM_pend__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)18) << 16 | 768);

/* A_noEvents__C */
const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_A_noEvents__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_invTimeout__C */
const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_A_invTimeout__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badContext__C */
const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_A_badContext__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_overflow__C */
const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_A_overflow__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_pendTaskDisabled__C */
const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* supportsEvents__C */
const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_supportsEvents__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C __attribute__ ((section (".rodata_ti_sysbios_knl_Semaphore_supportsPriority__C")));
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 0;


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Object__PARAMS__C")));
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Clock_workFuncDynamic__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0x5,  /* priority */
        (xdc_UInt)0x20,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Swi_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((const CT__ti_sysbios_knl_Swi_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Swi_Module__gatePrms)NULL);

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn8)NULL);

/* Object__heap__C */
const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* LM_begin__C */
const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_LM_begin__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)19) << 16 | 768);

/* LD_end__C */
const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_LD_end__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)20) << 16 | 512);

/* LM_post__C */
const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_LM_post__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)21) << 16 | 768);

/* A_swiDisabled__C */
const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_A_swiDisabled__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badPriority__C */
const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_A_badPriority__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* hooks__C */
const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_hooks__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_taskDisable__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((const CT__ti_sysbios_knl_Swi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_taskRestore__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((const CT__ti_sysbios_knl_Swi_taskRestore)(ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C __attribute__ ((section (".rodata_ti_sysbios_knl_Swi_numConstructedSwis__C")));
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */


/* Object__PARAMS__C */
const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Object__PARAMS__C")));
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)NULL),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)NULL),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[4] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Task_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((const CT__ti_sysbios_knl_Task_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Task_Module__gatePrms)NULL);

/* Module__loggerDefined__C */
const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Task_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn8)NULL);

/* Object__heap__C */
const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Object__heap__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* LM_switch__C */
const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_switch__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)22) << 16 | 768);

/* LM_sleep__C */
const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_sleep__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)23) << 16 | 768);

/* LD_ready__C */
const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LD_ready__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)24) << 16 | 512);

/* LD_block__C */
const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LD_block__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)25) << 16 | 512);

/* LM_yield__C */
const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_yield__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)26) << 16 | 768);

/* LM_setPri__C */
const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_setPri__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)27) << 16 | 768);

/* LD_exit__C */
const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LD_exit__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)28) << 16 | 512);

/* LM_setAffinity__C */
const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_setAffinity__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)29) << 16 | 768);

/* LM_schedule__C */
const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_schedule__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)30) << 16 | 1024);

/* LM_noWork__C */
const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_LM_noWork__C")));
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)31) << 16 | 1024);

/* E_stackOverflow__C */
const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_E_stackOverflow__C")));
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)9) << 16 | 0U);

/* E_spOutOfBounds__C */
const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_E_spOutOfBounds__C")));
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)10) << 16 | 0U);

/* E_deleteNotAllowed__C */
const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_E_deleteNotAllowed__C")));
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)11) << 16 | 0U);

/* E_moduleStateCheckFailed__C */
const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_E_moduleStateCheckFailed__C")));
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)12) << 16 | 0U);

/* E_objectCheckFailed__C */
const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_E_objectCheckFailed__C")));
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)13) << 16 | 0U);

/* A_badThreadType__C */
const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_badThreadType__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badTaskState__C */
const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_badTaskState__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_noPendElem__C */
const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_noPendElem__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_taskDisabled__C */
const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_taskDisabled__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badPriority__C */
const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_badPriority__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badTimeout__C */
const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_badTimeout__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_badAffinity__C */
const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_badAffinity__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_sleepTaskDisabled__C */
const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_sleepTaskDisabled__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* A_invalidCoreId__C */
const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_A_invalidCoreId__C")));
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);

/* numPriorities__C */
const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_numPriorities__C")));
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x4;

/* checkStackFlag__C */
const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_checkStackFlag__C")));
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 0;

/* deleteTerminatedTasks__C */
const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_deleteTerminatedTasks__C")));
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_hooks__C")));
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* moduleStateCheckFxn__C */
const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_moduleStateCheckFxn__C")));
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckFxn)(ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_moduleStateCheckValueFxn__C")));
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)(ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_moduleStateCheckFlag__C")));
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_objectCheckFxn__C")));
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckFxn)(ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_objectCheckValueFxn__C")));
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckValueFxn)(ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_objectCheckFlag__C")));
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* startupHookFunc__C */
const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C __attribute__ ((section (".rodata_ti_sysbios_knl_Task_startupHookFunc__C")));
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((const CT__ti_sysbios_knl_Task_startupHookFunc)NULL);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.cc26x2v2.CC26xx INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsEnabled ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsEnabled ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsIncluded ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsIncluded ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsMask ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsMask ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsMask__C = ((const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gateObj ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gateObj ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gateObj__C = ((const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gatePrms ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gatePrms ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gatePrms__C = ((const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__id ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__id__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__id ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__id__C = (xdc_Bits16)0x30;

/* Module__loggerDefined__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerDefined ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerDefined ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerObj ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerObj ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerObj__C = ((const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn0 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn0 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn0__C = ((const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn1 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn1 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn1__C = ((const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn2 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn2 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn2__C = ((const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn4 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn4 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn4__C = ((const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn8 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn8 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn8__C = ((const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__count ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__count__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__count ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__heap ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__heap__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__heap ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__sizeof ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__sizeof ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__table ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__table__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__table ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__table__C = NULL;

/* REVISION__C */
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_REVISION ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_REVISION__C __attribute__ ((section (".rodata_ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_REVISION__C")));
__FAR__ const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_REVISION ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_REVISION__C = (xdc_UInt32)0x11141955;


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_sysbios_rts_gnu_ReentSupport_Module_State__ ti_sysbios_rts_gnu_ReentSupport_Module__state__V __attribute__ ((section(".data:ti_sysbios_rts_gnu_ReentSupport_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_rts_gnu_ReentSupport_Module_State__ ti_sysbios_rts_gnu_ReentSupport_Module__state__V __attribute__ ((section(".data_ti_sysbios_rts_gnu_ReentSupport_Module__state__V")));
#endif
ti_sysbios_rts_gnu_ReentSupport_Module_State__ ti_sysbios_rts_gnu_ReentSupport_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    0,  /* lock */
};

/* Module__diagsEnabled__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gateObj ti_sysbios_rts_gnu_ReentSupport_Module__gateObj__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__gateObj__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gateObj ti_sysbios_rts_gnu_ReentSupport_Module__gateObj__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms)NULL);

/* Module__id__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__id ti_sysbios_rts_gnu_ReentSupport_Module__id__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__id__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__id ti_sysbios_rts_gnu_ReentSupport_Module__id__C = (xdc_Bits16)0x31;

/* Module__loggerDefined__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Object__count ti_sysbios_rts_gnu_ReentSupport_Object__count__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Object__count__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Object__count ti_sysbios_rts_gnu_ReentSupport_Object__count__C = 0;

/* Object__heap__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Object__heap ti_sysbios_rts_gnu_ReentSupport_Object__heap__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Object__heap__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Object__heap ti_sysbios_rts_gnu_ReentSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Object__sizeof ti_sysbios_rts_gnu_ReentSupport_Object__sizeof__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Object__sizeof__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Object__sizeof ti_sysbios_rts_gnu_ReentSupport_Object__sizeof__C = 0;

/* Object__table__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_Object__table ti_sysbios_rts_gnu_ReentSupport_Object__table__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_Object__table__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Object__table ti_sysbios_rts_gnu_ReentSupport_Object__table__C = NULL;

/* enableReentSupport__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_enableReentSupport ti_sysbios_rts_gnu_ReentSupport_enableReentSupport__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_enableReentSupport__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_enableReentSupport ti_sysbios_rts_gnu_ReentSupport_enableReentSupport__C = 0;

/* A_badThreadType__C */
const CT__ti_sysbios_rts_gnu_ReentSupport_A_badThreadType ti_sysbios_rts_gnu_ReentSupport_A_badThreadType__C __attribute__ ((section (".rodata_ti_sysbios_rts_gnu_ReentSupport_A_badThreadType__C")));
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_A_badThreadType ti_sysbios_rts_gnu_ReentSupport_A_badThreadType__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((const CT__xdc_runtime_Assert_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((const CT__xdc_runtime_Assert_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((const CT__xdc_runtime_Assert_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__id__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x1;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((const CT__xdc_runtime_Assert_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Object__count__C")));
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Assert_Object__table__C")));
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((const CT__xdc_runtime_Core_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((const CT__xdc_runtime_Core_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((const CT__xdc_runtime_Core_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__id__C")));
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x2;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((const CT__xdc_runtime_Core_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((const CT__xdc_runtime_Core_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((const CT__xdc_runtime_Core_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((const CT__xdc_runtime_Core_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((const CT__xdc_runtime_Core_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Core_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((const CT__xdc_runtime_Core_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Core_Object__count__C")));
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Core_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Core_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Core_Object__table__C")));
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = NULL;

/* A_initializedParams__C */
const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C __attribute__ ((section (".rodata_xdc_runtime_Core_A_initializedParams__C")));
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((const CT__xdc_runtime_Defaults_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((const CT__xdc_runtime_Defaults_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((const CT__xdc_runtime_Defaults_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__id__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x3;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((const CT__xdc_runtime_Defaults_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Object__count__C")));
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Defaults_Object__table__C")));
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((const CT__xdc_runtime_Diags_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((const CT__xdc_runtime_Diags_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((const CT__xdc_runtime_Diags_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__id__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x4;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((const CT__xdc_runtime_Diags_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Object__count__C")));
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Diags_Object__table__C")));
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = NULL;

/* setMaskEnabled__C */
const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Diags_setMaskEnabled__C")));
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C __attribute__ ((section (".rodata_xdc_runtime_Diags_dictBase__C")));
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((const CT__xdc_runtime_Diags_dictBase)NULL);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data:xdc_runtime_Error_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((const CT__xdc_runtime_Error_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((const CT__xdc_runtime_Error_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((const CT__xdc_runtime_Error_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__id__C")));
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x5;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((const CT__xdc_runtime_Error_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((const CT__xdc_runtime_Error_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((const CT__xdc_runtime_Error_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((const CT__xdc_runtime_Error_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((const CT__xdc_runtime_Error_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Error_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((const CT__xdc_runtime_Error_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Error_Object__count__C")));
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Error_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Error_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Error_Object__table__C")));
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = NULL;

/* E_generic__C */
const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C __attribute__ ((section (".rodata_xdc_runtime_Error_E_generic__C")));
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)2) << 16 | 0U);

/* E_msgCode__C */
const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C __attribute__ ((section (".rodata_xdc_runtime_Error_E_msgCode__C")));
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)4) << 16 | 0U);

/* raiseHook__C */
const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C __attribute__ ((section (".rodata_xdc_runtime_Error_raiseHook__C")));
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((const CT__xdc_runtime_Error_raiseHook)(ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C __attribute__ ((section (".rodata_xdc_runtime_Error_maxDepth__C")));
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x2;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((const CT__xdc_runtime_Gate_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((const CT__xdc_runtime_Gate_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((const CT__xdc_runtime_Gate_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__id__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x6;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((const CT__xdc_runtime_Gate_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Object__count__C")));
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Gate_Object__table__C")));
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((const CT__xdc_runtime_Log_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((const CT__xdc_runtime_Log_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((const CT__xdc_runtime_Log_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__id__C")));
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x7;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((const CT__xdc_runtime_Log_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((const CT__xdc_runtime_Log_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((const CT__xdc_runtime_Log_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((const CT__xdc_runtime_Log_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((const CT__xdc_runtime_Log_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Log_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((const CT__xdc_runtime_Log_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Log_Object__count__C")));
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Log_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Log_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Log_Object__table__C")));
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = NULL;

/* L_construct__C */
const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_construct__C")));
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)1) << 16 | 4);

/* L_create__C */
const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_create__C")));
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)2) << 16 | 4);

/* L_destruct__C */
const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_destruct__C")));
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)3) << 16 | 4);

/* L_delete__C */
const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_delete__C")));
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4) << 16 | 4);

/* L_error__C */
const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_error__C")));
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5) << 16 | 192);

/* L_warning__C */
const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_warning__C")));
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)6) << 16 | 224);

/* L_info__C */
const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_info__C")));
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)7) << 16 | 16384);

/* L_start__C */
const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_start__C")));
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)8) << 16 | 32768);

/* L_stop__C */
const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_stop__C")));
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)9) << 16 | 32768);

/* L_startInstance__C */
const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_startInstance__C")));
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)10) << 16 | 32768);

/* L_stopInstance__C */
const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C __attribute__ ((section (".rodata_xdc_runtime_Log_L_stopInstance__C")));
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)11) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((const CT__xdc_runtime_Main_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((const CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((const CT__xdc_runtime_Main_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__id__C")));
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((const CT__xdc_runtime_Main_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((const CT__xdc_runtime_Main_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((const CT__xdc_runtime_Main_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((const CT__xdc_runtime_Main_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((const CT__xdc_runtime_Main_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Main_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((const CT__xdc_runtime_Main_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Main_Object__count__C")));
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Main_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Main_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Main_Object__table__C")));
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */


/* Module__diagsEnabled__C */
const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((const CT__xdc_runtime_Memory_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((const CT__xdc_runtime_Memory_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((const CT__xdc_runtime_Memory_Module__gatePrms)NULL);

/* Module__loggerDefined__C */
const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((const CT__xdc_runtime_Memory_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Object__count__C")));
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Memory_Object__table__C")));
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */


/* Module__diagsEnabled__C */
const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((const CT__xdc_runtime_Registry_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((const CT__xdc_runtime_Registry_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((const CT__xdc_runtime_Registry_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__id__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0xa;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((const CT__xdc_runtime_Registry_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Object__count__C")));
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Registry_Object__table__C")));
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */


/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[] __attribute__ ((section (".rodata_xdc_runtime_Startup_firstFxns__A")));
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_heaps_HeapMem_initPrimary__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_initStack)),  /* [2] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[] __attribute__ ((section (".rodata_xdc_runtime_Startup_sfxnTab__A")));
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11] = {
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Clock_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Mailbox_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Swi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Task_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_cc26xx_Timer_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_hal_Hwi_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_rts_gnu_ReentSupport_Module_startup__E)),  /* [10] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[] __attribute__ ((section (".rodata_xdc_runtime_Startup_sfxnRts__A")));
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    1,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((const CT__xdc_runtime_Startup_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((const CT__xdc_runtime_Startup_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((const CT__xdc_runtime_Startup_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__id__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0xb;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((const CT__xdc_runtime_Startup_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Object__count__C")));
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Startup_Object__table__C")));
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = NULL;


/*
 * ======== xdc.runtime.SysCallback INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_SysCallback_Module__diagsEnabled xdc_runtime_SysCallback_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsEnabled xdc_runtime_SysCallback_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_SysCallback_Module__diagsIncluded xdc_runtime_SysCallback_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsIncluded xdc_runtime_SysCallback_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_SysCallback_Module__diagsMask xdc_runtime_SysCallback_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsMask xdc_runtime_SysCallback_Module__diagsMask__C = ((const CT__xdc_runtime_SysCallback_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_SysCallback_Module__gateObj xdc_runtime_SysCallback_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__gateObj xdc_runtime_SysCallback_Module__gateObj__C = ((const CT__xdc_runtime_SysCallback_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_SysCallback_Module__gatePrms xdc_runtime_SysCallback_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__gatePrms xdc_runtime_SysCallback_Module__gatePrms__C = ((const CT__xdc_runtime_SysCallback_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_SysCallback_Module__id xdc_runtime_SysCallback_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__id__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__id xdc_runtime_SysCallback_Module__id__C = (xdc_Bits16)0xd;

/* Module__loggerDefined__C */
const CT__xdc_runtime_SysCallback_Module__loggerDefined xdc_runtime_SysCallback_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerDefined xdc_runtime_SysCallback_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_SysCallback_Module__loggerObj xdc_runtime_SysCallback_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerObj xdc_runtime_SysCallback_Module__loggerObj__C = ((const CT__xdc_runtime_SysCallback_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_SysCallback_Module__loggerFxn0 xdc_runtime_SysCallback_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn0 xdc_runtime_SysCallback_Module__loggerFxn0__C = ((const CT__xdc_runtime_SysCallback_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_SysCallback_Module__loggerFxn1 xdc_runtime_SysCallback_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn1 xdc_runtime_SysCallback_Module__loggerFxn1__C = ((const CT__xdc_runtime_SysCallback_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_SysCallback_Module__loggerFxn2 xdc_runtime_SysCallback_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn2 xdc_runtime_SysCallback_Module__loggerFxn2__C = ((const CT__xdc_runtime_SysCallback_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_SysCallback_Module__loggerFxn4 xdc_runtime_SysCallback_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn4 xdc_runtime_SysCallback_Module__loggerFxn4__C = ((const CT__xdc_runtime_SysCallback_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_SysCallback_Module__loggerFxn8 xdc_runtime_SysCallback_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn8 xdc_runtime_SysCallback_Module__loggerFxn8__C = ((const CT__xdc_runtime_SysCallback_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_SysCallback_Object__count xdc_runtime_SysCallback_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Object__count__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Object__count xdc_runtime_SysCallback_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_SysCallback_Object__heap xdc_runtime_SysCallback_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Object__heap__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Object__heap xdc_runtime_SysCallback_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_SysCallback_Object__sizeof xdc_runtime_SysCallback_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Object__sizeof xdc_runtime_SysCallback_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_SysCallback_Object__table xdc_runtime_SysCallback_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_SysCallback_Object__table__C")));
__FAR__ const CT__xdc_runtime_SysCallback_Object__table xdc_runtime_SysCallback_Object__table__C = NULL;


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
#ifdef __ti__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data:xdc_runtime_SysMin_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((const CT__xdc_runtime_SysMin_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((const CT__xdc_runtime_SysMin_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((const CT__xdc_runtime_SysMin_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__id__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0xe;

/* Module__loggerDefined__C */
const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((const CT__xdc_runtime_SysMin_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Object__count__C")));
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Object__heap__C")));
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_Object__table__C")));
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = NULL;

/* bufSize__C */
const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_bufSize__C")));
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x200;

/* flushAtExit__C */
const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_flushAtExit__C")));
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_outputFxn__C")));
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((const CT__xdc_runtime_SysMin_outputFxn)NULL);

/* outputFunc__C */
const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C __attribute__ ((section (".rodata_xdc_runtime_SysMin_outputFunc__C")));
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((const CT__xdc_runtime_SysMin_outputFunc)(xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2] = {
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [1] */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((const CT__xdc_runtime_System_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((const CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((const CT__xdc_runtime_System_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__id__C")));
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0xc;

/* Module__loggerDefined__C */
const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((const CT__xdc_runtime_System_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((const CT__xdc_runtime_System_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((const CT__xdc_runtime_System_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((const CT__xdc_runtime_System_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((const CT__xdc_runtime_System_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_System_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((const CT__xdc_runtime_System_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_System_Object__count__C")));
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_System_Object__heap__C")));
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_System_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_System_Object__table__C")));
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = NULL;

/* A_cannotFitIntoArg__C */
const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C __attribute__ ((section (".rodata_xdc_runtime_System_A_cannotFitIntoArg__C")));
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)0) << 16 | 16);


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data:xdc_runtime_Text_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_CPtr)(&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_CPtr)(&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[] __attribute__ ((section (".rodata_xdc_runtime_Text_charTab__A")));
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[1] = {
    (xdc_Char)0x0,  /* [0] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[] __attribute__ ((section (".rodata_xdc_runtime_Text_nodeTab__A")));
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[1] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((const CT__xdc_runtime_Text_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((const CT__xdc_runtime_Text_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((const CT__xdc_runtime_Text_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__id__C")));
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0xf;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((const CT__xdc_runtime_Text_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((const CT__xdc_runtime_Text_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((const CT__xdc_runtime_Text_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((const CT__xdc_runtime_Text_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((const CT__xdc_runtime_Text_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Text_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((const CT__xdc_runtime_Text_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Text_Object__count__C")));
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Text_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Text_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Text_Object__table__C")));
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = NULL;

/* nodeTab__C */
const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C __attribute__ ((section (".rodata_xdc_runtime_Text_nodeTab__C")));
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((const CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* nodeCnt__C */
const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C __attribute__ ((section (".rodata_xdc_runtime_Text_nodeCnt__C")));
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x1;

/* visitRopeFxn2__C */
const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Text_visitRopeFxn2__C")));
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((const CT__xdc_runtime_Text_visitRopeFxn2)(xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((const CT__xdc_runtime_Timestamp_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((const CT__xdc_runtime_Timestamp_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((const CT__xdc_runtime_Timestamp_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__id__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x10;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((const CT__xdc_runtime_Timestamp_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Object__count__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Timestamp_Object__table__C")));
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__diagsEnabled__C")));
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__diagsIncluded__C")));
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__diagsMask__C")));
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((const CT__xdc_runtime_Types_Module__diagsMask)NULL);

/* Module__gateObj__C */
const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__gateObj__C")));
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((const CT__xdc_runtime_Types_Module__gateObj)NULL);

/* Module__gatePrms__C */
const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__gatePrms__C")));
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((const CT__xdc_runtime_Types_Module__gatePrms)NULL);

/* Module__id__C */
const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__id__C")));
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x11;

/* Module__loggerDefined__C */
const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__loggerDefined__C")));
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__loggerObj__C")));
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((const CT__xdc_runtime_Types_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__loggerFxn0__C")));
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((const CT__xdc_runtime_Types_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__loggerFxn1__C")));
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((const CT__xdc_runtime_Types_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__loggerFxn2__C")));
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((const CT__xdc_runtime_Types_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__loggerFxn4__C")));
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((const CT__xdc_runtime_Types_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C __attribute__ ((section (".rodata_xdc_runtime_Types_Module__loggerFxn8__C")));
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((const CT__xdc_runtime_Types_Module__loggerFxn8)NULL);

/* Object__count__C */
const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C __attribute__ ((section (".rodata_xdc_runtime_Types_Object__count__C")));
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C __attribute__ ((section (".rodata_xdc_runtime_Types_Object__heap__C")));
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = NULL;

/* Object__sizeof__C */
const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C __attribute__ ((section (".rodata_xdc_runtime_Types_Object__sizeof__C")));
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C __attribute__ ((section (".rodata_xdc_runtime_Types_Object__table__C")));
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S(void)
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_cc26xx_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_cc26xx_Timer___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_cc26xx_Timer_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_family_arm_cc26xx_Timer_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_cc26xx_Timer_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_arm_cc26xx_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_cc26xx_Timer___S1) - sizeof(ti_sysbios_family_arm_cc26xx_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_cc26xx_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_cc26xx_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_cc26xx_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;


/*
 * ======== ti.sysbios.heaps.HeapTrack OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapTrack_Object2__ s0; char c; } ti_sysbios_heaps_HeapTrack___S1;
const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapTrack_Object__DESC__C __attribute__ ((section (".rodata_ti_sysbios_heaps_HeapTrack_Object__DESC__C")));
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapTrack_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapTrack_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapTrack_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapTrack___S1) - sizeof(ti_sysbios_heaps_HeapTrack_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapTrack_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapTrack_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapTrack_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;


/*
 * ======== ti.sysbios.knl.Mailbox OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Mailbox_Object2__ s0; char c; } ti_sysbios_knl_Mailbox___S1;


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;


/*
 * ======== ROM STRUCTURES ========
 */

/* CT__constStruct */
typedef struct {
    CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__R;
    xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__R;
    CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__R;
    xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__R;
    CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__R;
    xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__R;
    CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__R;
    xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O;
    ti_sysbios_heaps_HeapTrack_Fxns__ ti_sysbios_heaps_HeapTrack_Module__FXNS__R;
    CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__R;
    CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__R;
    CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__R;
    xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__R;
    CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__R;
    xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataQue__O;
    CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__R;
    ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__R;
    xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O;
    CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__R;
    CT__ti_sysbios_family_arm_cc26xx_Timer_Module__id ti_sysbios_family_arm_cc26xx_Timer_Module__id__R;
    CT__ti_sysbios_knl_Mailbox_Object__table ti_sysbios_knl_Mailbox_Object__table__R;
    CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__R;
    xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__R;
    CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__R;
    CT__ti_sysbios_heaps_HeapTrack_A_bufOverflow ti_sysbios_heaps_HeapTrack_A_bufOverflow__R;
    CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__R;
    CT__ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1 ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1__R;
    CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__R;
    CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__R;
    CT__ti_sysbios_heaps_HeapTrack_A_notEmpty ti_sysbios_heaps_HeapTrack_A_notEmpty__R;
    CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__R;
    CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__R;
    CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__R;
    CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__R;
    CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__R;
    CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__R;
    CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__R;
    CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__R;
    CT__xdc_runtime_SysCallback_flushFxn xdc_runtime_SysCallback_flushFxn__R;
    CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__R;
    CT__ti_sysbios_family_arm_cc26xx_Timer_startupNeeded ti_sysbios_family_arm_cc26xx_Timer_startupNeeded__R;
    CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__R;
    xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__R;
    CT__ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2 ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2__R;
    CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__R;
    xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__R;
    CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__R;
    CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__R;
    xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__R;
    CT__xdc_runtime_SysCallback_exitFxn xdc_runtime_SysCallback_exitFxn__R;
    CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__R;
    CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__R;
    ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__R;
    CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__R;
    CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__R;
    CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__R;
    CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__R;
    CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__R;
    xdc_runtime_Core_ObjDesc ti_sysbios_knl_Mailbox_Object__DESC__R;
    CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__R;
    CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__R;
    CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__R;
    CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__R;
    CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__R;
    CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__R;
    CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__R;
    CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__R;
    xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataSem__O;
    ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__R;
    xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__R;
    CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__R;
    CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__R;
    CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__R;
    xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeSem__O;
    CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__R;
    CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__R;
    CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__R;
    CT__ti_sysbios_heaps_HeapTrack_A_doubleFree ti_sysbios_heaps_HeapTrack_A_doubleFree__R;
    CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__R;
    CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__R;
    xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__R;
    xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__R;
    CT__xdc_runtime_SysCallback_putchFxn xdc_runtime_SysCallback_putchFxn__R;
    CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__R;
    CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__R;
    CT__ti_sysbios_knl_Mailbox_maxTypeAlign ti_sysbios_knl_Mailbox_maxTypeAlign__R;
    CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer__R;
    xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O;
    CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__R;
    CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__R;
    CT__ti_sysbios_knl_Mailbox_Object__count ti_sysbios_knl_Mailbox_Object__count__R;
    CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__R;
    CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__R;
    CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__R;
    xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O;
    CT__xdc_runtime_SysCallback_readyFxn xdc_runtime_SysCallback_readyFxn__R;
    CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__R;
    CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__R;
    xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__R;
    CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__R;
    CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__R;
    xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O;
    CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__R;
    xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__R;
    CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__R;
    CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__R;
    CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__R;
    CT__xdc_runtime_SysCallback_abortFxn xdc_runtime_SysCallback_abortFxn__R;
    CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__R;
    CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__R;
    CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__R;
    CT__ti_sysbios_heaps_HeapTrack_Module__id ti_sysbios_heaps_HeapTrack_Module__id__R;
    CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__R;
    CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__R;
    CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__R;
    xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__R;
    CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__R;
    CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__R;
    xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeQue__O;
    CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__R;
} CT__constStruct;


/* TROM__stateStruct */
typedef struct {
    ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;
    ti_sysbios_family_arm_cc26xx_TimestampProvider_Module_State__ ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V;
    xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;
    xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;
    ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;
    ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;
    ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;
    xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;
    xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;
    ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;
    ti_sysbios_family_arm_cc26xx_Timer_Module_State__ ti_sysbios_family_arm_cc26xx_Timer_Module__state__V;
} TROM__stateStruct;

const xdc_SizeT xdc_runtime_Error_policy__C_offset = offsetof(CT__constStruct, xdc_runtime_Error_policy__R);
const xdc_SizeT xdc_runtime_IModule_Interface__BASE__C_offset = offsetof(CT__constStruct, xdc_runtime_IModule_Interface__BASE__R);
const xdc_SizeT xdc_runtime_Startup_lastFxns__C_offset = offsetof(CT__constStruct, xdc_runtime_Startup_lastFxns__R);
const xdc_SizeT ti_sysbios_knl_Event_Object__DESC__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Event_Object__DESC__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_excHookFuncs__R);
const xdc_SizeT ti_sysbios_gates_GateMutex_Object__DESC__C_offset = offsetof(CT__constStruct, ti_sysbios_gates_GateMutex_Object__DESC__R);
const xdc_SizeT xdc_runtime_Startup_execImpl__C_offset = offsetof(CT__constStruct, xdc_runtime_Startup_execImpl__R);
const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O_offset = offsetof(CT__constStruct, ti_sysbios_gates_GateMutex_Instance_State_sem__O);
const xdc_SizeT ti_sysbios_heaps_HeapTrack_Module__FXNS__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapTrack_Module__FXNS__R);
const xdc_SizeT ti_sysbios_knl_Swi_Object__count__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Swi_Object__count__R);
const xdc_SizeT ti_sysbios_knl_Idle_funcList__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Idle_funcList__R);
const xdc_SizeT xdc_runtime_Text_isLoaded__C_offset = offsetof(CT__constStruct, xdc_runtime_Text_isLoaded__R);
const xdc_SizeT ti_sysbios_knl_Clock_Object__DESC__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Clock_Object__DESC__R);
const xdc_SizeT ti_sysbios_knl_Task_Module__id__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Task_Module__id__R);
const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataQue__O_offset = offsetof(CT__constStruct, ti_sysbios_knl_Mailbox_Instance_State_dataQue__O);
const xdc_SizeT ti_sysbios_knl_Semaphore_eventSync__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Semaphore_eventSync__R);
const xdc_SizeT ti_sysbios_gates_GateMutex_Module__FXNS__C_offset = offsetof(CT__constStruct, ti_sysbios_gates_GateMutex_Module__FXNS__R);
const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O_offset = offsetof(CT__constStruct, ti_sysbios_knl_Task_Module_State_inactiveQ__O);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_Module__id__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_Module__id__R);
const xdc_SizeT ti_sysbios_family_arm_cc26xx_Timer_Module__id__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_cc26xx_Timer_Module__id__R);
const xdc_SizeT ti_sysbios_knl_Mailbox_Object__table__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Mailbox_Object__table__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_Object__table__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_Object__table__R);
const xdc_SizeT ti_sysbios_knl_Swi_Object__DESC__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Swi_Object__DESC__R);
const xdc_SizeT xdc_runtime_Text_charCnt__C_offset = offsetof(CT__constStruct, xdc_runtime_Text_charCnt__R);
const xdc_SizeT ti_sysbios_heaps_HeapTrack_A_bufOverflow__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapTrack_A_bufOverflow__R);
const xdc_SizeT ti_sysbios_heaps_HeapMem_Object__table__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapMem_Object__table__R);
const xdc_SizeT ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1__R);
const xdc_SizeT xdc_runtime_Error_policyFxn__C_offset = offsetof(CT__constStruct, xdc_runtime_Error_policyFxn__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_E_reserved__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_E_reserved__R);
const xdc_SizeT ti_sysbios_heaps_HeapTrack_A_notEmpty__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapTrack_A_notEmpty__R);
const xdc_SizeT xdc_runtime_Startup_firstFxns__C_offset = offsetof(CT__constStruct, xdc_runtime_Startup_firstFxns__R);
const xdc_SizeT xdc_runtime_Text_charTab__C_offset = offsetof(CT__constStruct, xdc_runtime_Text_charTab__R);
const xdc_SizeT ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__R);
const xdc_SizeT ti_sysbios_knl_Clock_triggerClock__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Clock_triggerClock__R);
const xdc_SizeT ti_sysbios_knl_Swi_Object__table__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Swi_Object__table__R);
const xdc_SizeT xdc_runtime_Memory_Module__id__C_offset = offsetof(CT__constStruct, xdc_runtime_Memory_Module__id__R);
const xdc_SizeT ti_sysbios_knl_Swi_Module__id__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Swi_Module__id__R);
const xdc_SizeT xdc_runtime_SysCallback_flushFxn__C_offset = offsetof(CT__constStruct, xdc_runtime_SysCallback_flushFxn__R);
const xdc_SizeT ti_sysbios_heaps_HeapMem_Module__gateObj__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapMem_Module__gateObj__R);
const xdc_SizeT ti_sysbios_family_arm_cc26xx_Timer_startupNeeded__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_cc26xx_Timer_startupNeeded__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_E_noIsr__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_E_noIsr__R);
const xdc_SizeT ti_sysbios_knl_Queue_Object__DESC__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Queue_Object__DESC__R);
const xdc_SizeT ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_E_NMI__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_E_NMI__R);
const xdc_SizeT ti_sysbios_knl_Task_Object__DESC__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Task_Object__DESC__R);
const xdc_SizeT xdc_runtime_Assert_E_assertFailed__C_offset = offsetof(CT__constStruct, xdc_runtime_Assert_E_assertFailed__R);
const xdc_SizeT ti_sysbios_gates_GateHwi_Module__id__C_offset = offsetof(CT__constStruct, ti_sysbios_gates_GateHwi_Module__id__R);
const xdc_SizeT xdc_runtime_IHeap_Interface__BASE__C_offset = offsetof(CT__constStruct, xdc_runtime_IHeap_Interface__BASE__R);
const xdc_SizeT xdc_runtime_SysCallback_exitFxn__C_offset = offsetof(CT__constStruct, xdc_runtime_SysCallback_exitFxn__R);
const xdc_SizeT ti_sysbios_heaps_HeapMem_Module__id__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapMem_Module__id__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__R);
const xdc_SizeT ti_sysbios_heaps_HeapMem_Module__FXNS__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapMem_Module__FXNS__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_E_busFault__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_E_busFault__R);
const xdc_SizeT xdc_runtime_System_maxAtexitHandlers__C_offset = offsetof(CT__constStruct, xdc_runtime_System_maxAtexitHandlers__R);
const xdc_SizeT ti_sysbios_knl_Queue_Object__count__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Queue_Object__count__R);
const xdc_SizeT xdc_runtime_Text_registryModsLastId__C_offset = offsetof(CT__constStruct, xdc_runtime_Text_registryModsLastId__R);
const xdc_SizeT ti_sysbios_knl_Task_Object__table__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Task_Object__table__R);
const xdc_SizeT ti_sysbios_knl_Mailbox_Object__DESC__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Mailbox_Object__DESC__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__R);
const xdc_SizeT ti_sysbios_knl_Clock_tickMode__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Clock_tickMode__R);
const xdc_SizeT ti_sysbios_gates_GateMutex_Module__id__C_offset = offsetof(CT__constStruct, ti_sysbios_gates_GateMutex_Module__id__R);
const xdc_SizeT ti_sysbios_knl_Swi_numPriorities__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Swi_numPriorities__R);
const xdc_SizeT ti_sysbios_knl_Task_numConstructedTasks__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Task_numConstructedTasks__R);
const xdc_SizeT xdc_runtime_Startup_maxPasses__C_offset = offsetof(CT__constStruct, xdc_runtime_Startup_maxPasses__R);
const xdc_SizeT ti_sysbios_knl_Task_initStackFlag__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Task_initStackFlag__R);
const xdc_SizeT xdc_runtime_System_abortFxn__C_offset = offsetof(CT__constStruct, xdc_runtime_System_abortFxn__R);
const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataSem__O_offset = offsetof(CT__constStruct, ti_sysbios_knl_Mailbox_Instance_State_dataSem__O);
const xdc_SizeT ti_sysbios_gates_GateHwi_Module__FXNS__C_offset = offsetof(CT__constStruct, ti_sysbios_gates_GateHwi_Module__FXNS__R);
const xdc_SizeT ti_sysbios_hal_Hwi_Object__DESC__C_offset = offsetof(CT__constStruct, ti_sysbios_hal_Hwi_Object__DESC__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_priGroup__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_priGroup__R);
const xdc_SizeT xdc_runtime_Error_E_memory__C_offset = offsetof(CT__constStruct, xdc_runtime_Error_E_memory__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__R);
const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeSem__O_offset = offsetof(CT__constStruct, ti_sysbios_knl_Mailbox_Instance_State_freeSem__O);
const xdc_SizeT ti_sysbios_knl_Queue_Object__table__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Queue_Object__table__R);
const xdc_SizeT ti_sysbios_knl_Semaphore_eventPost__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Semaphore_eventPost__R);
const xdc_SizeT xdc_runtime_System_exitFxn__C_offset = offsetof(CT__constStruct, xdc_runtime_System_exitFxn__R);
const xdc_SizeT ti_sysbios_heaps_HeapTrack_A_doubleFree__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapTrack_A_doubleFree__R);
const xdc_SizeT ti_sysbios_heaps_HeapMem_reqAlign__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapMem_reqAlign__R);
const xdc_SizeT xdc_runtime_Startup_sfxnRts__C_offset = offsetof(CT__constStruct, xdc_runtime_Startup_sfxnRts__R);
const xdc_SizeT ti_sysbios_knl_Semaphore_Object__DESC__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Semaphore_Object__DESC__R);
const xdc_SizeT ti_sysbios_gates_GateHwi_Object__DESC__C_offset = offsetof(CT__constStruct, ti_sysbios_gates_GateHwi_Object__DESC__R);
const xdc_SizeT xdc_runtime_SysCallback_putchFxn__C_offset = offsetof(CT__constStruct, xdc_runtime_SysCallback_putchFxn__R);
const xdc_SizeT ti_sysbios_heaps_HeapMem_Object__count__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapMem_Object__count__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__R);
const xdc_SizeT ti_sysbios_knl_Mailbox_maxTypeAlign__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Mailbox_maxTypeAlign__R);
const xdc_SizeT ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer__R);
const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O_offset = offsetof(CT__constStruct, ti_sysbios_knl_Event_Instance_State_pendQ__O);
const xdc_SizeT ti_sysbios_knl_Task_allBlockedFunc__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Task_allBlockedFunc__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_E_hardFault__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_E_hardFault__R);
const xdc_SizeT ti_sysbios_knl_Mailbox_Object__count__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Mailbox_Object__count__R);
const xdc_SizeT xdc_runtime_Text_nameStatic__C_offset = offsetof(CT__constStruct, xdc_runtime_Text_nameStatic__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_E_debugMon__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_E_debugMon__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_E_svCall__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_E_svCall__R);
const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O_offset = offsetof(CT__constStruct, ti_sysbios_knl_Clock_Module_State_clockQ__O);
const xdc_SizeT xdc_runtime_SysCallback_readyFxn__C_offset = offsetof(CT__constStruct, xdc_runtime_SysCallback_readyFxn__R);
const xdc_SizeT xdc_runtime_Text_unnamedModsLastId__C_offset = offsetof(CT__constStruct, xdc_runtime_Text_unnamedModsLastId__R);
const xdc_SizeT ti_sysbios_knl_Task_defaultStackSize__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Task_defaultStackSize__R);
const xdc_SizeT xdc_runtime_IGateProvider_Interface__BASE__C_offset = offsetof(CT__constStruct, xdc_runtime_IGateProvider_Interface__BASE__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__R);
const xdc_SizeT xdc_runtime_Startup_startModsFxn__C_offset = offsetof(CT__constStruct, xdc_runtime_Startup_startModsFxn__R);
const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O_offset = offsetof(CT__constStruct, ti_sysbios_knl_Semaphore_Instance_State_pendQ__O);
const xdc_SizeT xdc_runtime_System_extendFxn__C_offset = offsetof(CT__constStruct, xdc_runtime_System_extendFxn__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_Object__DESC__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_Object__DESC__R);
const xdc_SizeT xdc_runtime_Text_nameEmpty__C_offset = offsetof(CT__constStruct, xdc_runtime_Text_nameEmpty__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_Object__count__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_Object__count__R);
const xdc_SizeT xdc_runtime_Text_visitRopeFxn__C_offset = offsetof(CT__constStruct, xdc_runtime_Text_visitRopeFxn__R);
const xdc_SizeT xdc_runtime_SysCallback_abortFxn__C_offset = offsetof(CT__constStruct, xdc_runtime_SysCallback_abortFxn__R);
const xdc_SizeT ti_sysbios_knl_Task_defaultStackHeap__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Task_defaultStackHeap__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_E_usageFault__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_E_usageFault__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_ccr__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_ccr__R);
const xdc_SizeT ti_sysbios_heaps_HeapTrack_Module__id__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapTrack_Module__id__R);
const xdc_SizeT ti_sysbios_heaps_HeapMem_E_memory__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapMem_E_memory__R);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_E_memFault__C_offset = offsetof(CT__constStruct, ti_sysbios_family_arm_m3_Hwi_E_memFault__R);
const xdc_SizeT ti_sysbios_knl_Task_Object__count__C_offset = offsetof(CT__constStruct, ti_sysbios_knl_Task_Object__count__R);
const xdc_SizeT ti_sysbios_heaps_HeapMem_Object__DESC__C_offset = offsetof(CT__constStruct, ti_sysbios_heaps_HeapMem_Object__DESC__R);
const xdc_SizeT xdc_runtime_Text_nameUnknown__C_offset = offsetof(CT__constStruct, xdc_runtime_Text_nameUnknown__R);
const xdc_SizeT xdc_runtime_Memory_defaultHeapInstance__C_offset = offsetof(CT__constStruct, xdc_runtime_Memory_defaultHeapInstance__R);
const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeQue__O_offset = offsetof(CT__constStruct, ti_sysbios_knl_Mailbox_Instance_State_freeQue__O);
const xdc_SizeT xdc_runtime_Startup_sfxnTab__C_offset = offsetof(CT__constStruct, xdc_runtime_Startup_sfxnTab__R);
const xdc_SizeT ti_sysbios_knl_Clock_Module__state__V_offset = offsetof(TROM__stateStruct, ti_sysbios_knl_Clock_Module__state__V);
const xdc_SizeT ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V_offset = offsetof(TROM__stateStruct, ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V);
const xdc_SizeT xdc_runtime_Startup_Module__state__V_offset = offsetof(TROM__stateStruct, xdc_runtime_Startup_Module__state__V);
const xdc_SizeT xdc_runtime_Registry_Module__state__V_offset = offsetof(TROM__stateStruct, xdc_runtime_Registry_Module__state__V);
const xdc_SizeT ti_sysbios_BIOS_Module__state__V_offset = offsetof(TROM__stateStruct, ti_sysbios_BIOS_Module__state__V);
const xdc_SizeT ti_sysbios_knl_Swi_Module__state__V_offset = offsetof(TROM__stateStruct, ti_sysbios_knl_Swi_Module__state__V);
const xdc_SizeT ti_sysbios_knl_Task_Module__state__V_offset = offsetof(TROM__stateStruct, ti_sysbios_knl_Task_Module__state__V);
const xdc_SizeT xdc_runtime_Memory_Module__state__V_offset = offsetof(TROM__stateStruct, xdc_runtime_Memory_Module__state__V);
const xdc_SizeT xdc_runtime_System_Module__state__V_offset = offsetof(TROM__stateStruct, xdc_runtime_System_Module__state__V);
const xdc_SizeT ti_sysbios_family_arm_m3_Hwi_Module__state__V_offset = offsetof(TROM__stateStruct, ti_sysbios_family_arm_m3_Hwi_Module__state__V);
const xdc_SizeT ti_sysbios_family_arm_cc26xx_Timer_Module__state__V_offset = offsetof(TROM__stateStruct, ti_sysbios_family_arm_cc26xx_Timer_Module__state__V);
#define xdc_runtime_Error_policy__C (ROM_constStruct.xdc_runtime_Error_policy__R)
#define xdc_runtime_IModule_Interface__BASE__C (ROM_constStruct.xdc_runtime_IModule_Interface__BASE__R)
#define xdc_runtime_Startup_lastFxns__C (ROM_constStruct.xdc_runtime_Startup_lastFxns__R)
#define ti_sysbios_knl_Event_Object__DESC__C (ROM_constStruct.ti_sysbios_knl_Event_Object__DESC__R)
#define ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_excHookFuncs__R)
#define ti_sysbios_gates_GateMutex_Object__DESC__C (ROM_constStruct.ti_sysbios_gates_GateMutex_Object__DESC__R)
#define xdc_runtime_Startup_execImpl__C (ROM_constStruct.xdc_runtime_Startup_execImpl__R)
#define ti_sysbios_gates_GateMutex_Instance_State_sem__O (ROM_constStruct.ti_sysbios_gates_GateMutex_Instance_State_sem__O)
#define ti_sysbios_heaps_HeapTrack_Module__FXNS__C (ROM_constStruct.ti_sysbios_heaps_HeapTrack_Module__FXNS__R)
#define ti_sysbios_knl_Swi_Object__count__C (ROM_constStruct.ti_sysbios_knl_Swi_Object__count__R)
#define ti_sysbios_knl_Idle_funcList__C (ROM_constStruct.ti_sysbios_knl_Idle_funcList__R)
#define xdc_runtime_Text_isLoaded__C (ROM_constStruct.xdc_runtime_Text_isLoaded__R)
#define ti_sysbios_knl_Clock_Object__DESC__C (ROM_constStruct.ti_sysbios_knl_Clock_Object__DESC__R)
#define ti_sysbios_knl_Task_Module__id__C (ROM_constStruct.ti_sysbios_knl_Task_Module__id__R)
#define ti_sysbios_knl_Mailbox_Instance_State_dataQue__O (ROM_constStruct.ti_sysbios_knl_Mailbox_Instance_State_dataQue__O)
#define ti_sysbios_knl_Semaphore_eventSync__C (ROM_constStruct.ti_sysbios_knl_Semaphore_eventSync__R)
#define ti_sysbios_gates_GateMutex_Module__FXNS__C (ROM_constStruct.ti_sysbios_gates_GateMutex_Module__FXNS__R)
#define ti_sysbios_knl_Task_Module_State_inactiveQ__O (ROM_constStruct.ti_sysbios_knl_Task_Module_State_inactiveQ__O)
#define ti_sysbios_family_arm_m3_Hwi_Module__id__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_Module__id__R)
#define ti_sysbios_family_arm_cc26xx_Timer_Module__id__C (ROM_constStruct.ti_sysbios_family_arm_cc26xx_Timer_Module__id__R)
#define ti_sysbios_knl_Mailbox_Object__table__C (ROM_constStruct.ti_sysbios_knl_Mailbox_Object__table__R)
#define ti_sysbios_family_arm_m3_Hwi_Object__table__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_Object__table__R)
#define ti_sysbios_knl_Swi_Object__DESC__C (ROM_constStruct.ti_sysbios_knl_Swi_Object__DESC__R)
#define xdc_runtime_Text_charCnt__C (ROM_constStruct.xdc_runtime_Text_charCnt__R)
#define ti_sysbios_heaps_HeapTrack_A_bufOverflow__C (ROM_constStruct.ti_sysbios_heaps_HeapTrack_A_bufOverflow__R)
#define ti_sysbios_heaps_HeapMem_Object__table__C (ROM_constStruct.ti_sysbios_heaps_HeapMem_Object__table__R)
#define ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1__C (ROM_constStruct.ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1__R)
#define xdc_runtime_Error_policyFxn__C (ROM_constStruct.xdc_runtime_Error_policyFxn__R)
#define ti_sysbios_family_arm_m3_Hwi_E_reserved__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_E_reserved__R)
#define ti_sysbios_heaps_HeapTrack_A_notEmpty__C (ROM_constStruct.ti_sysbios_heaps_HeapTrack_A_notEmpty__R)
#define xdc_runtime_Startup_firstFxns__C (ROM_constStruct.xdc_runtime_Startup_firstFxns__R)
#define xdc_runtime_Text_charTab__C (ROM_constStruct.xdc_runtime_Text_charTab__R)
#define ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C (ROM_constStruct.ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__R)
#define ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__R)
#define ti_sysbios_knl_Clock_triggerClock__C (ROM_constStruct.ti_sysbios_knl_Clock_triggerClock__R)
#define ti_sysbios_knl_Swi_Object__table__C (ROM_constStruct.ti_sysbios_knl_Swi_Object__table__R)
#define xdc_runtime_Memory_Module__id__C (ROM_constStruct.xdc_runtime_Memory_Module__id__R)
#define ti_sysbios_knl_Swi_Module__id__C (ROM_constStruct.ti_sysbios_knl_Swi_Module__id__R)
#define xdc_runtime_SysCallback_flushFxn__C (ROM_constStruct.xdc_runtime_SysCallback_flushFxn__R)
#define ti_sysbios_heaps_HeapMem_Module__gateObj__C (ROM_constStruct.ti_sysbios_heaps_HeapMem_Module__gateObj__R)
#define ti_sysbios_family_arm_cc26xx_Timer_startupNeeded__C (ROM_constStruct.ti_sysbios_family_arm_cc26xx_Timer_startupNeeded__R)
#define ti_sysbios_family_arm_m3_Hwi_E_noIsr__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_E_noIsr__R)
#define ti_sysbios_knl_Queue_Object__DESC__C (ROM_constStruct.ti_sysbios_knl_Queue_Object__DESC__R)
#define ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2__C (ROM_constStruct.ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2__R)
#define ti_sysbios_family_arm_m3_Hwi_E_NMI__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_E_NMI__R)
#define ti_sysbios_knl_Task_Object__DESC__C (ROM_constStruct.ti_sysbios_knl_Task_Object__DESC__R)
#define xdc_runtime_Assert_E_assertFailed__C (ROM_constStruct.xdc_runtime_Assert_E_assertFailed__R)
#define ti_sysbios_gates_GateHwi_Module__id__C (ROM_constStruct.ti_sysbios_gates_GateHwi_Module__id__R)
#define xdc_runtime_IHeap_Interface__BASE__C (ROM_constStruct.xdc_runtime_IHeap_Interface__BASE__R)
#define xdc_runtime_SysCallback_exitFxn__C (ROM_constStruct.xdc_runtime_SysCallback_exitFxn__R)
#define ti_sysbios_heaps_HeapMem_Module__id__C (ROM_constStruct.ti_sysbios_heaps_HeapMem_Module__id__R)
#define ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__R)
#define ti_sysbios_heaps_HeapMem_Module__FXNS__C (ROM_constStruct.ti_sysbios_heaps_HeapMem_Module__FXNS__R)
#define ti_sysbios_family_arm_m3_Hwi_E_busFault__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_E_busFault__R)
#define xdc_runtime_System_maxAtexitHandlers__C (ROM_constStruct.xdc_runtime_System_maxAtexitHandlers__R)
#define ti_sysbios_knl_Queue_Object__count__C (ROM_constStruct.ti_sysbios_knl_Queue_Object__count__R)
#define xdc_runtime_Text_registryModsLastId__C (ROM_constStruct.xdc_runtime_Text_registryModsLastId__R)
#define ti_sysbios_knl_Task_Object__table__C (ROM_constStruct.ti_sysbios_knl_Task_Object__table__R)
#define ti_sysbios_knl_Mailbox_Object__DESC__C (ROM_constStruct.ti_sysbios_knl_Mailbox_Object__DESC__R)
#define ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__R)
#define ti_sysbios_knl_Clock_tickMode__C (ROM_constStruct.ti_sysbios_knl_Clock_tickMode__R)
#define ti_sysbios_gates_GateMutex_Module__id__C (ROM_constStruct.ti_sysbios_gates_GateMutex_Module__id__R)
#define ti_sysbios_knl_Swi_numPriorities__C (ROM_constStruct.ti_sysbios_knl_Swi_numPriorities__R)
#define ti_sysbios_knl_Task_numConstructedTasks__C (ROM_constStruct.ti_sysbios_knl_Task_numConstructedTasks__R)
#define xdc_runtime_Startup_maxPasses__C (ROM_constStruct.xdc_runtime_Startup_maxPasses__R)
#define ti_sysbios_knl_Task_initStackFlag__C (ROM_constStruct.ti_sysbios_knl_Task_initStackFlag__R)
#define xdc_runtime_System_abortFxn__C (ROM_constStruct.xdc_runtime_System_abortFxn__R)
#define ti_sysbios_knl_Mailbox_Instance_State_dataSem__O (ROM_constStruct.ti_sysbios_knl_Mailbox_Instance_State_dataSem__O)
#define ti_sysbios_gates_GateHwi_Module__FXNS__C (ROM_constStruct.ti_sysbios_gates_GateHwi_Module__FXNS__R)
#define ti_sysbios_hal_Hwi_Object__DESC__C (ROM_constStruct.ti_sysbios_hal_Hwi_Object__DESC__R)
#define ti_sysbios_family_arm_m3_Hwi_priGroup__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_priGroup__R)
#define xdc_runtime_Error_E_memory__C (ROM_constStruct.xdc_runtime_Error_E_memory__R)
#define ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__R)
#define ti_sysbios_knl_Mailbox_Instance_State_freeSem__O (ROM_constStruct.ti_sysbios_knl_Mailbox_Instance_State_freeSem__O)
#define ti_sysbios_knl_Queue_Object__table__C (ROM_constStruct.ti_sysbios_knl_Queue_Object__table__R)
#define ti_sysbios_knl_Semaphore_eventPost__C (ROM_constStruct.ti_sysbios_knl_Semaphore_eventPost__R)
#define xdc_runtime_System_exitFxn__C (ROM_constStruct.xdc_runtime_System_exitFxn__R)
#define ti_sysbios_heaps_HeapTrack_A_doubleFree__C (ROM_constStruct.ti_sysbios_heaps_HeapTrack_A_doubleFree__R)
#define ti_sysbios_heaps_HeapMem_reqAlign__C (ROM_constStruct.ti_sysbios_heaps_HeapMem_reqAlign__R)
#define xdc_runtime_Startup_sfxnRts__C (ROM_constStruct.xdc_runtime_Startup_sfxnRts__R)
#define ti_sysbios_knl_Semaphore_Object__DESC__C (ROM_constStruct.ti_sysbios_knl_Semaphore_Object__DESC__R)
#define ti_sysbios_gates_GateHwi_Object__DESC__C (ROM_constStruct.ti_sysbios_gates_GateHwi_Object__DESC__R)
#define xdc_runtime_SysCallback_putchFxn__C (ROM_constStruct.xdc_runtime_SysCallback_putchFxn__R)
#define ti_sysbios_heaps_HeapMem_Object__count__C (ROM_constStruct.ti_sysbios_heaps_HeapMem_Object__count__R)
#define ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__R)
#define ti_sysbios_knl_Mailbox_maxTypeAlign__C (ROM_constStruct.ti_sysbios_knl_Mailbox_maxTypeAlign__R)
#define ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer__C (ROM_constStruct.ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer__R)
#define ti_sysbios_knl_Event_Instance_State_pendQ__O (ROM_constStruct.ti_sysbios_knl_Event_Instance_State_pendQ__O)
#define ti_sysbios_knl_Task_allBlockedFunc__C (ROM_constStruct.ti_sysbios_knl_Task_allBlockedFunc__R)
#define ti_sysbios_family_arm_m3_Hwi_E_hardFault__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_E_hardFault__R)
#define ti_sysbios_knl_Mailbox_Object__count__C (ROM_constStruct.ti_sysbios_knl_Mailbox_Object__count__R)
#define xdc_runtime_Text_nameStatic__C (ROM_constStruct.xdc_runtime_Text_nameStatic__R)
#define ti_sysbios_family_arm_m3_Hwi_E_debugMon__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_E_debugMon__R)
#define ti_sysbios_family_arm_m3_Hwi_E_svCall__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_E_svCall__R)
#define ti_sysbios_knl_Clock_Module_State_clockQ__O (ROM_constStruct.ti_sysbios_knl_Clock_Module_State_clockQ__O)
#define xdc_runtime_SysCallback_readyFxn__C (ROM_constStruct.xdc_runtime_SysCallback_readyFxn__R)
#define xdc_runtime_Text_unnamedModsLastId__C (ROM_constStruct.xdc_runtime_Text_unnamedModsLastId__R)
#define ti_sysbios_knl_Task_defaultStackSize__C (ROM_constStruct.ti_sysbios_knl_Task_defaultStackSize__R)
#define xdc_runtime_IGateProvider_Interface__BASE__C (ROM_constStruct.xdc_runtime_IGateProvider_Interface__BASE__R)
#define ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__R)
#define xdc_runtime_Startup_startModsFxn__C (ROM_constStruct.xdc_runtime_Startup_startModsFxn__R)
#define ti_sysbios_knl_Semaphore_Instance_State_pendQ__O (ROM_constStruct.ti_sysbios_knl_Semaphore_Instance_State_pendQ__O)
#define xdc_runtime_System_extendFxn__C (ROM_constStruct.xdc_runtime_System_extendFxn__R)
#define ti_sysbios_family_arm_m3_Hwi_Object__DESC__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_Object__DESC__R)
#define xdc_runtime_Text_nameEmpty__C (ROM_constStruct.xdc_runtime_Text_nameEmpty__R)
#define ti_sysbios_family_arm_m3_Hwi_Object__count__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_Object__count__R)
#define xdc_runtime_Text_visitRopeFxn__C (ROM_constStruct.xdc_runtime_Text_visitRopeFxn__R)
#define xdc_runtime_SysCallback_abortFxn__C (ROM_constStruct.xdc_runtime_SysCallback_abortFxn__R)
#define ti_sysbios_knl_Task_defaultStackHeap__C (ROM_constStruct.ti_sysbios_knl_Task_defaultStackHeap__R)
#define ti_sysbios_family_arm_m3_Hwi_E_usageFault__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_E_usageFault__R)
#define ti_sysbios_family_arm_m3_Hwi_ccr__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_ccr__R)
#define ti_sysbios_heaps_HeapTrack_Module__id__C (ROM_constStruct.ti_sysbios_heaps_HeapTrack_Module__id__R)
#define ti_sysbios_heaps_HeapMem_E_memory__C (ROM_constStruct.ti_sysbios_heaps_HeapMem_E_memory__R)
#define ti_sysbios_family_arm_m3_Hwi_E_memFault__C (ROM_constStruct.ti_sysbios_family_arm_m3_Hwi_E_memFault__R)
#define ti_sysbios_knl_Task_Object__count__C (ROM_constStruct.ti_sysbios_knl_Task_Object__count__R)
#define ti_sysbios_heaps_HeapMem_Object__DESC__C (ROM_constStruct.ti_sysbios_heaps_HeapMem_Object__DESC__R)
#define xdc_runtime_Text_nameUnknown__C (ROM_constStruct.xdc_runtime_Text_nameUnknown__R)
#define xdc_runtime_Memory_defaultHeapInstance__C (ROM_constStruct.xdc_runtime_Memory_defaultHeapInstance__R)
#define ti_sysbios_knl_Mailbox_Instance_State_freeQue__O (ROM_constStruct.ti_sysbios_knl_Mailbox_Instance_State_freeQue__O)
#define xdc_runtime_Startup_sfxnTab__C (ROM_constStruct.xdc_runtime_Startup_sfxnTab__R)
#define ti_sysbios_knl_Clock_Module__state__V (ROM_stateStruct.ti_sysbios_knl_Clock_Module__state__V)
#define ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V (ROM_stateStruct.ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V)
#define xdc_runtime_Startup_Module__state__V (ROM_stateStruct.xdc_runtime_Startup_Module__state__V)
#define xdc_runtime_Registry_Module__state__V (ROM_stateStruct.xdc_runtime_Registry_Module__state__V)
#define ti_sysbios_BIOS_Module__state__V (ROM_stateStruct.ti_sysbios_BIOS_Module__state__V)
#define ti_sysbios_knl_Swi_Module__state__V (ROM_stateStruct.ti_sysbios_knl_Swi_Module__state__V)
#define ti_sysbios_knl_Task_Module__state__V (ROM_stateStruct.ti_sysbios_knl_Task_Module__state__V)
#define xdc_runtime_Memory_Module__state__V (ROM_stateStruct.xdc_runtime_Memory_Module__state__V)
#define xdc_runtime_System_Module__state__V (ROM_stateStruct.xdc_runtime_System_Module__state__V)
#define ti_sysbios_family_arm_m3_Hwi_Module__state__V (ROM_stateStruct.ti_sysbios_family_arm_m3_Hwi_Module__state__V)
#define ti_sysbios_family_arm_cc26xx_Timer_Module__state__V (ROM_stateStruct.ti_sysbios_family_arm_cc26xx_Timer_Module__state__V)

/* ROM_constStruct */
const CT__constStruct ROM_constStruct __attribute__ ((section (".rodata_ROM_constStruct")));
__FAR__ const CT__constStruct ROM_constStruct = {
    xdc_runtime_Error_UNWIND, /* xdc_runtime_Error_policy__R */
    {NULL}, /* xdc_runtime_IModule_Interface__BASE__R */
    {0, 0}, /* xdc_runtime_Startup_lastFxns__R */
    {
        (xdc_CPtr)-1, /* fxnTab */
        &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
        sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
        0, /* objHeap */
        0, /* objName */
        sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
        (xdc_CPtr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
        sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
    }, /* ti_sysbios_knl_Event_Object__DESC__R */
    ((const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A), /* ti_sysbios_family_arm_m3_Hwi_excHookFuncs__R */
    {
        (xdc_CPtr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
        &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
        sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
        0, /* objHeap */
        0, /* objName */
        sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
        (xdc_CPtr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
        sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
    }, /* ti_sysbios_gates_GateMutex_Object__DESC__R */
    ((const CT__xdc_runtime_Startup_execImpl)(xdc_runtime_Startup_exec__I)), /* xdc_runtime_Startup_execImpl__R */
    offsetof(ti_sysbios_gates_GateMutex_Object__,Object_field_sem), /* ti_sysbios_gates_GateMutex_Instance_State_sem__O */
    {
        &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
        &ti_sysbios_heaps_HeapTrack_Module__FXNS__C.__sfxns, /* __sysp */
        ti_sysbios_heaps_HeapTrack_alloc__E,
        ti_sysbios_heaps_HeapTrack_free__E,
        ti_sysbios_heaps_HeapTrack_isBlocking__E,
        ti_sysbios_heaps_HeapTrack_getStats__E,
        {
            ti_sysbios_heaps_HeapTrack_Object__create__S,
            ti_sysbios_heaps_HeapTrack_Object__delete__S,
            ti_sysbios_heaps_HeapTrack_Handle__label__S,
            0x2e, /* __mid */
        } /* __sfxns */
    }, /* ti_sysbios_heaps_HeapTrack_Module__FXNS__R */
    1, /* ti_sysbios_knl_Swi_Object__count__R */
    {1, ((__T1_ti_sysbios_knl_Idle_funcList const  *)ti_sysbios_knl_Idle_funcList__A)}, /* ti_sysbios_knl_Idle_funcList__R */
    0, /* xdc_runtime_Text_isLoaded__R */
    {
        (xdc_CPtr)-1, /* fxnTab */
        &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
        sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
        0, /* objHeap */
        0, /* objName */
        sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
        (xdc_CPtr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
        sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
    }, /* ti_sysbios_knl_Clock_Object__DESC__R */
    (xdc_Bits16)0x1f, /* ti_sysbios_knl_Task_Module__id__R */
    offsetof(ti_sysbios_knl_Mailbox_Object__,Object_field_dataQue), /* ti_sysbios_knl_Mailbox_Instance_State_dataQue__O */
    ((const CT__ti_sysbios_knl_Semaphore_eventSync)NULL), /* ti_sysbios_knl_Semaphore_eventSync__R */
    {
        &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
        ti_sysbios_gates_GateMutex_query__E,
        ti_sysbios_gates_GateMutex_enter__E,
        ti_sysbios_gates_GateMutex_leave__E,
        {
            ti_sysbios_gates_GateMutex_Object__create__S,
            ti_sysbios_gates_GateMutex_Object__delete__S,
            ti_sysbios_gates_GateMutex_Handle__label__S,
            0x33, /* __mid */
        } /* __sfxns */
    }, /* ti_sysbios_gates_GateMutex_Module__FXNS__R */
    offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_inactiveQ), /* ti_sysbios_knl_Task_Module_State_inactiveQ__O */
    (xdc_Bits16)0x25, /* ti_sysbios_family_arm_m3_Hwi_Module__id__R */
    (xdc_Bits16)0x29, /* ti_sysbios_family_arm_cc26xx_Timer_Module__id__R */
    NULL, /* ti_sysbios_knl_Mailbox_Object__table__R */
    ti_sysbios_family_arm_m3_Hwi_Object__table__V, /* ti_sysbios_family_arm_m3_Hwi_Object__table__R */
    {
        (xdc_CPtr)-1, /* fxnTab */
        &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
        sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
        0, /* objHeap */
        0, /* objName */
        sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
        (xdc_CPtr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
        sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
    }, /* ti_sysbios_knl_Swi_Object__DESC__R */
    (xdc_Int16)0x1, /* xdc_runtime_Text_charCnt__R */
    (((xdc_runtime_Assert_Id)0) << 16 | 16), /* ti_sysbios_heaps_HeapTrack_A_bufOverflow__R */
    ti_sysbios_heaps_HeapMem_Object__table__V, /* ti_sysbios_heaps_HeapMem_Object__table__R */
    ((const CT__ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1)NULL), /* ti_sysbios_family_arm_cc26xx_Timer_funcHookCH1__R */
    ((const CT__xdc_runtime_Error_policyFxn)(xdc_runtime_Error_policySpin__E)), /* xdc_runtime_Error_policyFxn__R */
    (((xdc_runtime_Error_Id)26) << 16 | 0U), /* ti_sysbios_family_arm_m3_Hwi_E_reserved__R */
    (((xdc_runtime_Assert_Id)0) << 16 | 16), /* ti_sysbios_heaps_HeapTrack_A_notEmpty__R */
    {3, ((__T1_xdc_runtime_Startup_firstFxns const  *)xdc_runtime_Startup_firstFxns__A)}, /* xdc_runtime_Startup_firstFxns__R */
    ((const CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A), /* xdc_runtime_Text_charTab__R */
    (xdc_UInt)0x8, /* ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__R */
    (xdc_Int)0x36, /* ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__R */
    (ti_sysbios_knl_Clock_Handle)&ti_sysbios_knl_Clock_Object__table__V[0], /* ti_sysbios_knl_Clock_triggerClock__R */
    ti_sysbios_knl_Swi_Object__table__V, /* ti_sysbios_knl_Swi_Object__table__R */
    (xdc_Bits16)0x9, /* xdc_runtime_Memory_Module__id__R */
    (xdc_Bits16)0x1e, /* ti_sysbios_knl_Swi_Module__id__R */
    ((const CT__xdc_runtime_SysCallback_flushFxn)(xdc_runtime_SysCallback_defaultFlush)), /* xdc_runtime_SysCallback_flushFxn__R */
    ((const CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0])), /* ti_sysbios_heaps_HeapMem_Module__gateObj__R */
    (xdc_UInt)0x1, /* ti_sysbios_family_arm_cc26xx_Timer_startupNeeded__R */
    (((xdc_runtime_Error_Id)18) << 16 | 0U), /* ti_sysbios_family_arm_m3_Hwi_E_noIsr__R */
    {
        (xdc_CPtr)-1, /* fxnTab */
        &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
        sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
        0, /* objHeap */
        0, /* objName */
        sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
        (xdc_CPtr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
        sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
    }, /* ti_sysbios_knl_Queue_Object__DESC__R */
    ((const CT__ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2)NULL), /* ti_sysbios_family_arm_cc26xx_Timer_funcHookCH2__R */
    (((xdc_runtime_Error_Id)19) << 16 | 0U), /* ti_sysbios_family_arm_m3_Hwi_E_NMI__R */
    {
        (xdc_CPtr)-1, /* fxnTab */
        &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
        sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
        0, /* objHeap */
        0, /* objName */
        sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
        (xdc_CPtr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
        sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
    }, /* ti_sysbios_knl_Task_Object__DESC__R */
    (((xdc_runtime_Error_Id)1) << 16 | 0U), /* xdc_runtime_Assert_E_assertFailed__R */
    (xdc_Bits16)0x32, /* ti_sysbios_gates_GateHwi_Module__id__R */
    {&xdc_runtime_IModule_Interface__BASE__C}, /* xdc_runtime_IHeap_Interface__BASE__R */
    ((const CT__xdc_runtime_SysCallback_exitFxn)(xdc_runtime_SysCallback_defaultExit)), /* xdc_runtime_SysCallback_exitFxn__R */
    (xdc_Bits16)0x2d, /* ti_sysbios_heaps_HeapMem_Module__id__R */
    ((const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)NULL), /* ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__R */
    {
        &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
        ti_sysbios_heaps_HeapMem_alloc__E,
        ti_sysbios_heaps_HeapMem_free__E,
        ti_sysbios_heaps_HeapMem_isBlocking__E,
        ti_sysbios_heaps_HeapMem_getStats__E,
        {
            ti_sysbios_heaps_HeapMem_Object__create__S,
            ti_sysbios_heaps_HeapMem_Object__delete__S,
            ti_sysbios_heaps_HeapMem_Handle__label__S,
            0x2d, /* __mid */
        } /* __sfxns */
    }, /* ti_sysbios_heaps_HeapMem_Module__FXNS__R */
    (((xdc_runtime_Error_Id)22) << 16 | 0U), /* ti_sysbios_family_arm_m3_Hwi_E_busFault__R */
    (xdc_Int)0x2, /* xdc_runtime_System_maxAtexitHandlers__R */
    0, /* ti_sysbios_knl_Queue_Object__count__R */
    (xdc_UInt16)0x7fff, /* xdc_runtime_Text_registryModsLastId__R */
    ti_sysbios_knl_Task_Object__table__V, /* ti_sysbios_knl_Task_Object__table__R */
    {
        (xdc_CPtr)-1, /* fxnTab */
        &ti_sysbios_knl_Mailbox_Module__root__V.link, /* modLink */
        sizeof(ti_sysbios_knl_Mailbox___S1) - sizeof(ti_sysbios_knl_Mailbox_Object2__), /* objAlign */
        0, /* objHeap */
        0, /* objName */
        sizeof(ti_sysbios_knl_Mailbox_Object2__), /* objSize */
        (xdc_CPtr)&ti_sysbios_knl_Mailbox_Object__PARAMS__C, /* prmsInit */
        sizeof(ti_sysbios_knl_Mailbox_Params), /* prmsSize */
    }, /* ti_sysbios_knl_Mailbox_Object__DESC__R */
    ((const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)(ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I)), /* ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__R */
    ti_sysbios_knl_Clock_TickMode_DYNAMIC, /* ti_sysbios_knl_Clock_tickMode__R */
    (xdc_Bits16)0x33, /* ti_sysbios_gates_GateMutex_Module__id__R */
    (xdc_UInt)0x6, /* ti_sysbios_knl_Swi_numPriorities__R */
    (xdc_UInt)0x0, /* ti_sysbios_knl_Task_numConstructedTasks__R */
    (xdc_Int)0x20, /* xdc_runtime_Startup_maxPasses__R */
    1, /* ti_sysbios_knl_Task_initStackFlag__R */
    ((const CT__xdc_runtime_System_abortFxn)(xdc_runtime_System_abortSpin__E)), /* xdc_runtime_System_abortFxn__R */
    offsetof(ti_sysbios_knl_Mailbox_Object__,Object_field_dataSem), /* ti_sysbios_knl_Mailbox_Instance_State_dataSem__O */
    {
        &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
        ti_sysbios_gates_GateHwi_query__E,
        ti_sysbios_gates_GateHwi_enter__E,
        ti_sysbios_gates_GateHwi_leave__E,
        {
            ti_sysbios_gates_GateHwi_Object__create__S,
            ti_sysbios_gates_GateHwi_Object__delete__S,
            ti_sysbios_gates_GateHwi_Handle__label__S,
            0x32, /* __mid */
        } /* __sfxns */
    }, /* ti_sysbios_gates_GateHwi_Module__FXNS__R */
    {
        (xdc_CPtr)NULL, /* fxnTab */
        &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
        sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
        0, /* objHeap */
        0, /* objName */
        sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
        (xdc_CPtr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
        sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
    }, /* ti_sysbios_hal_Hwi_Object__DESC__R */
    (xdc_UInt)0x0, /* ti_sysbios_family_arm_m3_Hwi_priGroup__R */
    (((xdc_runtime_Error_Id)3) << 16 | 0U), /* xdc_runtime_Error_E_memory__R */
    (((xdc_runtime_Error_Id)15) << 16 | 0U), /* ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__R */
    offsetof(ti_sysbios_knl_Mailbox_Object__,Object_field_freeSem), /* ti_sysbios_knl_Mailbox_Instance_State_freeSem__O */
    NULL, /* ti_sysbios_knl_Queue_Object__table__R */
    ((const CT__ti_sysbios_knl_Semaphore_eventPost)NULL), /* ti_sysbios_knl_Semaphore_eventPost__R */
    ((const CT__xdc_runtime_System_exitFxn)(xdc_runtime_System_exitSpin__E)), /* xdc_runtime_System_exitFxn__R */
    (((xdc_runtime_Assert_Id)0) << 16 | 16), /* ti_sysbios_heaps_HeapTrack_A_doubleFree__R */
    (xdc_SizeT)0x8, /* ti_sysbios_heaps_HeapMem_reqAlign__R */
    ((const CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A), /* xdc_runtime_Startup_sfxnRts__R */
    {
        (xdc_CPtr)-1, /* fxnTab */
        &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
        sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
        0, /* objHeap */
        0, /* objName */
        sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
        (xdc_CPtr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
        sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
    }, /* ti_sysbios_knl_Semaphore_Object__DESC__R */
    {
        (xdc_CPtr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
        &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
        sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
        0, /* objHeap */
        0, /* objName */
        sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
        (xdc_CPtr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
        sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
    }, /* ti_sysbios_gates_GateHwi_Object__DESC__R */
    ((const CT__xdc_runtime_SysCallback_putchFxn)(xdc_runtime_SysCallback_defaultPutch)), /* xdc_runtime_SysCallback_putchFxn__R */
    1, /* ti_sysbios_heaps_HeapMem_Object__count__R */
    (xdc_UInt)0x0, /* ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__R */
    (xdc_UInt)0x8, /* ti_sysbios_knl_Mailbox_maxTypeAlign__R */
    1, /* ti_sysbios_family_arm_cc26xx_TimestampProvider_useClockTimer__R */
    offsetof(ti_sysbios_knl_Event_Object__,Object_field_pendQ), /* ti_sysbios_knl_Event_Instance_State_pendQ__O */
    ((const CT__ti_sysbios_knl_Task_allBlockedFunc)NULL), /* ti_sysbios_knl_Task_allBlockedFunc__R */
    (((xdc_runtime_Error_Id)20) << 16 | 0U), /* ti_sysbios_family_arm_m3_Hwi_E_hardFault__R */
    0, /* ti_sysbios_knl_Mailbox_Object__count__R */
    "{static-instance-name}", /* xdc_runtime_Text_nameStatic__R */
    (((xdc_runtime_Error_Id)25) << 16 | 0U), /* ti_sysbios_family_arm_m3_Hwi_E_debugMon__R */
    (((xdc_runtime_Error_Id)24) << 16 | 0U), /* ti_sysbios_family_arm_m3_Hwi_E_svCall__R */
    offsetof(ti_sysbios_knl_Clock_Module_State__,Object_field_clockQ), /* ti_sysbios_knl_Clock_Module_State_clockQ__O */
    ((const CT__xdc_runtime_SysCallback_readyFxn)(xdc_runtime_SysCallback_defaultReady)), /* xdc_runtime_SysCallback_readyFxn__R */
    (xdc_UInt16)0x4000, /* xdc_runtime_Text_unnamedModsLastId__R */
    (xdc_SizeT)0x200, /* ti_sysbios_knl_Task_defaultStackSize__R */
    {&xdc_runtime_IModule_Interface__BASE__C}, /* xdc_runtime_IGateProvider_Interface__BASE__R */
    (((xdc_runtime_Error_Id)16) << 16 | 0U), /* ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__R */
    ((const CT__xdc_runtime_Startup_startModsFxn)(xdc_runtime_Startup_startMods__I)), /* xdc_runtime_Startup_startModsFxn__R */
    offsetof(ti_sysbios_knl_Semaphore_Object__,Object_field_pendQ), /* ti_sysbios_knl_Semaphore_Instance_State_pendQ__O */
    ((const CT__xdc_runtime_System_extendFxn)(xdc_runtime_System_printfExtend__I)), /* xdc_runtime_System_extendFxn__R */
    {
        (xdc_CPtr)NULL, /* fxnTab */
        &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
        sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
        0, /* objHeap */
        0, /* objName */
        sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
        (xdc_CPtr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
        sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
    }, /* ti_sysbios_family_arm_m3_Hwi_Object__DESC__R */
    "{empty-instance-name}", /* xdc_runtime_Text_nameEmpty__R */
    1, /* ti_sysbios_family_arm_m3_Hwi_Object__count__R */
    ((const CT__xdc_runtime_Text_visitRopeFxn)(xdc_runtime_Text_visitRope__I)), /* xdc_runtime_Text_visitRopeFxn__R */
    ((const CT__xdc_runtime_SysCallback_abortFxn)(xdc_runtime_SysCallback_defaultAbort)), /* xdc_runtime_SysCallback_abortFxn__R */
    0, /* ti_sysbios_knl_Task_defaultStackHeap__R */
    (((xdc_runtime_Error_Id)23) << 16 | 0U), /* ti_sysbios_family_arm_m3_Hwi_E_usageFault__R */
    (xdc_UInt32)0x200, /* ti_sysbios_family_arm_m3_Hwi_ccr__R */
    (xdc_Bits16)0x2e, /* ti_sysbios_heaps_HeapTrack_Module__id__R */
    (((xdc_runtime_Error_Id)35) << 16 | 0U), /* ti_sysbios_heaps_HeapMem_E_memory__R */
    (((xdc_runtime_Error_Id)21) << 16 | 0U), /* ti_sysbios_family_arm_m3_Hwi_E_memFault__R */
    1, /* ti_sysbios_knl_Task_Object__count__R */
    {
        (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
        &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
        sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
        0, /* objHeap */
        0, /* objName */
        sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
        (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
        sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
    }, /* ti_sysbios_heaps_HeapMem_Object__DESC__R */
    "{unknown-instance-name}", /* xdc_runtime_Text_nameUnknown__R */
    (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0], /* xdc_runtime_Memory_defaultHeapInstance__R */
    offsetof(ti_sysbios_knl_Mailbox_Object__,Object_field_freeQue), /* ti_sysbios_knl_Mailbox_Instance_State_freeQue__O */
    ((const CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A), /* xdc_runtime_Startup_sfxnTab__R */
};

/* ROM_stateStruct */
#ifdef __ti__
__FAR__ TROM__stateStruct ROM_stateStruct __attribute__ ((section(".data:ROM_stateStruct")));
#elif !(defined(__MACH__) && defined(__APPLE__))
__FAR__ TROM__stateStruct ROM_stateStruct __attribute__ ((section(".data_ROM_stateStruct")));
#endif
__FAR__ TROM__stateStruct ROM_stateStruct = {
    {
        (xdc_UInt32)0x0,  /* ticks */
        (xdc_UInt)0x0,  /* swiCount */
        (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_cc26xx_Timer_Object__table__V[0],  /* timer */
        (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
        (xdc_UInt)0x1,  /* numTickSkip */
        (xdc_UInt32)0x1,  /* nextScheduledTick */
        (xdc_UInt32)0x0,  /* maxSkippable */
        0,  /* inWorkFunc */
        0,  /* startDuringWorkFunc */
        0,  /* ticking */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_clockQ */
    }, /* ti_sysbios_knl_Clock_Module__state__V */
    {
        0,  /* timer */
    }, /* ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__state__V */
    {
        ((xdc_Int*)NULL),  /* stateTab */
        0,  /* execFlag */
        0,  /* rtsDoneFlag */
    }, /* xdc_runtime_Startup_Module__state__V */
    {
        ((xdc_runtime_Types_RegDesc*)NULL),  /* listHead */
        (xdc_Bits16)0x7fff,  /* curId */
    }, /* xdc_runtime_Registry_Module__state__V */
    {
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x2dc6c00,  /* lo */
        },  /* cpuFreq */
        (xdc_UInt)0x0,  /* rtsGateCount */
        ((xdc_IArg)(0x0)),  /* rtsGateKey */
        (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
        ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
        ((void*)0),  /* smpThreadType */
        ((xdc_Void(*)(xdc_Void))(ti_sysbios_BIOS_startFunc)),  /* startFunc */
        ((xdc_Void(*)(xdc_Int f_arg0))(ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
    }, /* ti_sysbios_BIOS_Module__state__V */
    {
        1,  /* locked */
        (xdc_UInt)0x0,  /* curSet */
        (xdc_UInt)0x0,  /* curTrigger */
        0,  /* curSwi */
        0,  /* curQ */
        ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
        ((void*)0),  /* constructedSwis */
    }, /* ti_sysbios_knl_Swi_Module__state__V */
    {
        1,  /* locked */
        (xdc_UInt)0x0,  /* curSet */
        0,  /* workFlag */
        (xdc_UInt)0x1,  /* vitalTasks */
        0,  /* curTask */
        0,  /* curQ */
        ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
        ((void*)0),  /* smpCurSet */
        ((void*)0),  /* smpCurMask */
        ((void*)0),  /* smpCurTask */
        ((void*)0),  /* smpReadyQ */
        ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
        ((void*)0),  /* constructedTasks */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_inactiveQ */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_terminatedQ */
    }, /* ti_sysbios_knl_Task_Module__state__V */
    {
        (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
    }, /* xdc_runtime_Memory_Module__state__V */
    {
        ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
        (xdc_Int)0x0,  /* numAtexitHandlers */
    }, /* xdc_runtime_System_Module__state__V */
    {
        ((xdc_Char*)NULL),  /* taskSP */
        ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
        ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
        ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
        ((xdc_Ptr)NULL),  /* isrStack */
        ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
        ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
        ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
        (xdc_UInt)0x101,  /* swiTaskKeys */
        ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
        0,  /* vnvicFlushRequired */
        ((void*)0),  /* intAffinity */
        ((void*)0),  /* intAffinityMasks */
    }, /* ti_sysbios_family_arm_m3_Hwi_Module__state__V */
    {
        (xdc_UInt)0x0,  /* availMask */
        (ti_sysbios_family_arm_cc26xx_Timer_Handle)&ti_sysbios_family_arm_cc26xx_Timer_Object__table__V[0],  /* handle */
    }, /* ti_sysbios_family_arm_cc26xx_Timer_Module__state__V */
};

/* xdcRomConstPtr */
#ifdef __ti__
const xdc_UInt8 * xdcRomConstPtr __attribute__ ((section(".data:xdcRomConstPtr")));
#elif !(defined(__MACH__) && defined(__APPLE__))
const xdc_UInt8 * xdcRomConstPtr __attribute__ ((section(".data_xdcRomConstPtr")));
#endif
const xdc_UInt8 * xdcRomConstPtr = (xdc_UInt8 *)&ROM_constStruct;

/* xdcRomStatePtr */
#ifdef __ti__
xdc_UInt8 * xdcRomStatePtr __attribute__ ((section(".data:xdcRomStatePtr")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_UInt8 * xdcRomStatePtr __attribute__ ((section(".data_xdcRomStatePtr")));
#endif
xdc_UInt8 * xdcRomStatePtr = (xdc_UInt8 *)&ROM_stateStruct;


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module mod, const xdc_runtime_IGateProvider_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IGateProvider_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IGateProvider_Params), eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module mod, const xdc_runtime_IHeap_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IHeap_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IHeap_Params), eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_cc26xx_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.cc26x2v2.CC26xx SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.rts.gnu.ReentSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__S( void )
{
    return ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_Main_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_Main_Module_GateProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_Main_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_Main_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_Main_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_Main_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS PRAGMAS ========
 */

const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.family.arm.cc26xx.Boot PRAGMAS ========
 */

const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_Boot_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_Boot_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask ti_sysbios_family_arm_cc26xx_Boot_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj ti_sysbios_family_arm_cc26xx_Boot_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms ti_sysbios_family_arm_cc26xx_Boot_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__id ti_sysbios_family_arm_cc26xx_Boot_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined ti_sysbios_family_arm_cc26xx_Boot_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj ti_sysbios_family_arm_cc26xx_Boot_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_Boot_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__count ti_sysbios_family_arm_cc26xx_Boot_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__heap ti_sysbios_family_arm_cc26xx_Boot_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof ti_sysbios_family_arm_cc26xx_Boot_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Boot_Object__table ti_sysbios_family_arm_cc26xx_Boot_Object__table__C __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_family_arm_cc26xx_Boot_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.family.arm.cc26xx.Timer PRAGMAS ========
 */

const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_Timer_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_Timer_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask ti_sysbios_family_arm_cc26xx_Timer_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj ti_sysbios_family_arm_cc26xx_Timer_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms ti_sysbios_family_arm_cc26xx_Timer_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined ti_sysbios_family_arm_cc26xx_Timer_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj ti_sysbios_family_arm_cc26xx_Timer_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_Timer_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__count ti_sysbios_family_arm_cc26xx_Timer_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__heap ti_sysbios_family_arm_cc26xx_Timer_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof ti_sysbios_family_arm_cc26xx_Timer_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_Object__table ti_sysbios_family_arm_cc26xx_Timer_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer ti_sysbios_family_arm_cc26xx_Timer_E_invalidTimer__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable ti_sysbios_family_arm_cc26xx_Timer_E_notAvailable__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport ti_sysbios_family_arm_cc26xx_Timer_E_cannotSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_Timer_anyMask ti_sysbios_family_arm_cc26xx_Timer_anyMask__C __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.family.arm.cc26xx.TimestampProvider PRAGMAS ========
 */

const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_cc26xx_TimestampProvider_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table ti_sysbios_family_arm_cc26xx_TimestampProvider_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId ti_sysbios_family_arm_cc26xx_TimestampProvider_timerId__C __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.family.arm.m3.Hwi PRAGMAS ========
 */

const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_E_badIntNum ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore ti_sysbios_family_arm_m3_Hwi_swiRestore__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C __attribute__ ((externally_visible));
const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.hal.Hwi PRAGMAS ========
 */

const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.heaps.HeapMem PRAGMAS ========
 */

const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C __attribute__ ((externally_visible));
const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Clock PRAGMAS ========
 */

const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Idle PRAGMAS ========
 */

const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Semaphore PRAGMAS ========
 */

const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Swi PRAGMAS ========
 */

const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Task PRAGMAS ========
 */

const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.rom.cortexm.cc26xx.cc26x2v2.CC26xx PRAGMAS ========
 */

const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsEnabled ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsIncluded ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsMask ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gateObj ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gatePrms ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__id ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerDefined ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerObj ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn0 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn1 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn2 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn4 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn8 ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__count ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__heap ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__sizeof ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__table ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_REVISION ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_REVISION__C __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_rom_cortexm_cc26xx_cc26x2v2_CC26xx_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.rts.gnu.ReentSupport PRAGMAS ========
 */

const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gateObj ti_sysbios_rts_gnu_ReentSupport_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__id ti_sysbios_rts_gnu_ReentSupport_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Object__count ti_sysbios_rts_gnu_ReentSupport_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Object__heap ti_sysbios_rts_gnu_ReentSupport_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Object__sizeof ti_sysbios_rts_gnu_ReentSupport_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_Object__table ti_sysbios_rts_gnu_ReentSupport_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_enableReentSupport ti_sysbios_rts_gnu_ReentSupport_enableReentSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_rts_gnu_ReentSupport_A_badThreadType ti_sysbios_rts_gnu_ReentSupport_A_badThreadType__C __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Defaults PRAGMAS ========
 */

const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Diags PRAGMAS ========
 */

const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Diags_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Error PRAGMAS ========
 */

const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Main PRAGMAS ========
 */

const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Main_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Memory PRAGMAS ========
 */

const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Startup PRAGMAS ========
 */

const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Startup_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.SysCallback PRAGMAS ========
 */

const CT__xdc_runtime_SysCallback_Module__diagsEnabled xdc_runtime_SysCallback_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Module__diagsIncluded xdc_runtime_SysCallback_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Module__diagsMask xdc_runtime_SysCallback_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Module__gateObj xdc_runtime_SysCallback_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Module__gatePrms xdc_runtime_SysCallback_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Module__id xdc_runtime_SysCallback_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Module__loggerDefined xdc_runtime_SysCallback_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Module__loggerObj xdc_runtime_SysCallback_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Module__loggerFxn0 xdc_runtime_SysCallback_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Module__loggerFxn1 xdc_runtime_SysCallback_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Module__loggerFxn2 xdc_runtime_SysCallback_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Module__loggerFxn4 xdc_runtime_SysCallback_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Module__loggerFxn8 xdc_runtime_SysCallback_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Object__count xdc_runtime_SysCallback_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Object__heap xdc_runtime_SysCallback_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Object__sizeof xdc_runtime_SysCallback_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysCallback_Object__table xdc_runtime_SysCallback_Object__table__C __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.SysMin PRAGMAS ========
 */

const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.System PRAGMAS ========
 */

const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Text PRAGMAS ========
 */

const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Text_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Timestamp PRAGMAS ========
 */

const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Types PRAGMAS ========
 */

const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Types_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

#include <stdint.h>
extern int_least32_t __xdc__init(void);
    __attribute__ ((used))
__FAR__ int_least32_t (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

    __attribute__ ((used))
const ti_sysbios_heaps_HeapMem_Handle heap0 = (ti_sysbios_heaps_HeapMem_Handle)((ti_sysbios_heaps_HeapMem_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0]);

