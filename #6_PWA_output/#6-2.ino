/*
    District P
    아두이노 코딩#6-2
    LED 밝기 연속 조절하기
*/

int LED_pin = 11;

void setup() {  
    pinMode(LED_pin, OUTPUT);
}

void loop() {  
    for (int i=0; i<=255; i++) {
        analogWrite(LED_pin, i);
        delay(10);
    }

    for (int i=255; i>=0; i--) {
        analogWrite(LED_pin, i);
        delay(10);
    }
}