/*
	District P
	아두이노 코딩#3-2
	for문을 이용한 LED 점멸 반복 회로 코드
	LED가 1초간격으로 5회 점멸 후 5초간 꺼져있다가 다시 켜지는 것을 반복
*/

int LED_pin = 8; 

void setup() {
    pinMode(LED_pin, OUTPUT);
}

void loop() {
    for(int i=0; i<5; i++) {
        digitalWrite(LED_pin, HIGH);
        delay(1000);
        digitalWrite(LED_pin, LOW);
        delay(1000);
    }

    delay(5000);
}