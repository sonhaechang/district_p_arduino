/*
    District P
    아두이노 코딩#14-1
    랜덤한 간격으로 점멸되는 LED 코드
*/

int LED_pin = 12;

void setup() {
    pinMode(LED_pin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    // 점멸시간을 1-20사이의 임의의 값으로 설정
    int blink_time = random(1, 21);
    Serial.println(blink_time);
    digitalWrite(LED_pin, HIGH);
    delay(blink_time * 1000);
    digitalWrite(LED_pin, LOW);
    delay(1000);
}