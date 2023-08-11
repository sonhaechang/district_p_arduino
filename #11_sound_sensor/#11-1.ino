/*
    District P
    아두이노 코딩#11-1
    소리감지센서의 값 확인 코드
*/

// 아두이노의 A0핀을 소리감지센서 핀으로 사용
int LM_pin = 4;

void setup() {
    Serial.begin(9600);

    pinMode(LM_pin, INPUT);
}

void loop() {
    // 소리가 감지되면
    if (digitalRead(LM_pin) == HIGH) {
        // 시리얼 모니터에 소리가 감지되었다는 메세지 출력
        Serial.println("sound detected.");
        delay(100);
    }
}