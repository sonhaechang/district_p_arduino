/*
    District P
    아두이노 코딩#17
    DC모터 다루기 코드
*/

int motor_pin = 11;

void setup() {
    pinMode(motor_pin, OUTPUT);
}

void loop() {
    analogWrite(motor_pin, 50);
}