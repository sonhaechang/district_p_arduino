/*
    District P
    아두이노 코딩#5-1
    for문 while문으로 대체하기
    LED가 1초간격으로 5회 점멸 후 5초간 꺼져있다가 다시 켜지는 것을 반복
*/

int LED_pin = 8;

void setup() {
    pinMode(LED_pin, OUTPUT);
}

void loop() {
    int i = 0;
    
    while(i<5) {
        digitalWrite(LED_pin, HIGH);
        delay(1000);
        digitalWrite(LED_pin, LOW);
        delay(1000);
        i++;
    }

    delay(5000);
}