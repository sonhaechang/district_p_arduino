/*
    District P
    아두이노 코딩#7-1
    조도센서의 값 확인하기
*/

// analog_pin을 A0로 사용
int analog_pin = A0;

void setup() {  
    // PC와의 시리얼 통신 설정
    Serial.begin(9600);
}

void loop() {  
    // cds 변수를 analog_pin의 값으로 지정
    int cds = analogRead(analog_pin);
    // 시리얼모니터에 "CdS : "라는 문자열 출력
    Serial.print("Cds : ");
    // 시리얼모니터에 cds변수값 출력 후 줄바꿈
    Serial.println(cds);
    // 0.1초간 기다림
    delay(100);
}