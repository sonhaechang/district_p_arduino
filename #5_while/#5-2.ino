/*
    District P
    아두이노 코딩#5-2
    if문을 while문으로 대체하기
    스위치 점등회로1 코드
*/

int LED_pin = 8;
int SW_pin = 4;

void setup() {
    pinMode(LED_pin, OUTPUT);
    pinMode(SW_pin, INPUT_PULLUP);
}

void loop() {
    while(digitalRead(SW_pin) == LOW) {
        digitalWrite(LED_pin, HIGH);
    }

    digitalWrite(LED_pin, LOW);
}