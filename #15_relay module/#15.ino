/*
    District P
    아두이노 코딩#15
    릴레이모듈 다루기 코드
*/

// 릴레이모듈 IN(제어핀)을 7번에 연결
int ctrl_pin = 7;

void setup() {
    pinMode(ctrl_pin, OUTPUT);
}

void loop() {
    digitalWrite(ctrl_pin, HIGH);
    delay(1000);
    digitalWrite(ctrl_pin, LOW);
    delay(1000);
}