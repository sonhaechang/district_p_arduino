/*
    District P
    아두이노 코딩#10-1
    온도센서를 이용해 주변온도 측정하기 코드
*/

int TMP_pin = A0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    // 온도센서의 값을 TMP변수에 저장
    int TMP = analogRead(TMP_pin);
    // 온도센서의 값을 섭씨로 바꿔 저장
    float tempaeratureC = (TMP*5.0/1024.0-0.5) * 100;
    // 섭씨온도를 PC에 출력
    Serial.print(tempaeratureC);
    // 섭씨온도의 단위를 PC에 출력
    Serial.println(" degrees C");
    delay(1000);
}