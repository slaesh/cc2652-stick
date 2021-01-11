FROM python:rc-slim-buster

COPY test.py .
COPY run.sh .

RUN pip3 install pyserial

CMD ./run.sh
