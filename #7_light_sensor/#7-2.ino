/*
    District P
    아두이노 코딩#7-2
    조도적응형 LED 조명 코드
*/

int LED_pin = 9;
// analog_pin을 A0로 사용
int cds_pin = A0;

void setup() {  
    pinMode(LED_pin, OUTPUT);
}

void loop() {  
    // cds변수에 cds_pin의 값을 저장
    int cds = analogRead(cds_pin);
    // cds값이 커질수록 LED_Light의 값을 작게 함
    int LED_Light = map(cds, 0, 1023, 255, 0);
    // LED_Light의 값을 PWM으로 출력
    analogWrite(LED_pin, LED_Light);
    delay(100);
}