/*
    District P
    아두이노 코딩#11-2
    박수소리로 끄고 켤 수 있는 LED 코드
*/

int LM_pin = 4;
int LED_pin = 6;
// 박수 횟수를 기록하는 변수 선언
int clap = 0;

void setup() {
    pinMode(LED_pin, OUTPUT);
    pinMode(LM_pin, INPUT);
}

void loop() {
    // 소리가 감지되면
    if (digitalRead(LM_pin) == HIGH) {
        // 박수 횟수를 1 증가
        clap++;
        delay(100);
    }

    // 박수 횟수가 2가 되면
    if (clap == 2) {
        // 박수 횟수를 0으로 초기화
        clap = 0;
    }

    // 박수를 한번 치면
    if (clap == 1) {
        digitalWrite(LED_pin, HIGH);
    // 박수를 한번 더 치면
    } else {
        digitalWrite(LED_pin, LOW);
    }
}