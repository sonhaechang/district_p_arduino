/*
    District P
    아두이노 코딩#3-1
    LED 점멸회로 코드
*/

// LED_pin이라는 변수에 8이라는 숫자를 저장
// LED를 사용하는 핀을 8번핀이라고 설정한 것
int LED_pin = 8; 

void setup() {
    // 아두이노의 8번핀을 출력으로 사용
    pinMode(LED_pin, OUTPUT);
}

void loop() {
    // 아두이노의 8번핀에 5V 출력
    digitalWrite(LED_pin, HIGH);
    // 1초간 기다림
    delay(1000);
    // 아두이노의 8번핀에 0V 출력
    digitalWrite(LED_pin, LOW);
    // 1초간 기다림
    delay(1000);
}