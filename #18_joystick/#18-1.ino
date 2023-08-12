/*
    District P
    아두이노 코딩#18-1
    조이스틱 모듈 사전작업
*/

// 조이스틱 버튼은 아두이노 12번 핀
int push_pin = 12;
// 조이스틱 X방향은 아두이노 A0핀
int pos_X = A0;
// 조이스틱 Y방향은 아두이노 A1핀
int pos_Y = A1;

void setup() {
    // 조이스틱 버튼은 INPUT_PULLUP
    pinMode(push_pin, INPUT_PULLUP);
    Serial.begin(9600);
}

void loop() {
    // 조이스틱의 X축 움직임을 X변수에 저장
    int X = analogRead(pos_X);
    // 조이스틱의 Y축 움직임을 Y변수에 저장
    int Y = analogRead(pos_Y);

    Serial.print("Push: ");
    // 시리얼모니터에 버튼 누름 유무 표시
    Serial.print(digitalRead(push_pin));

    Serial.print("\t");

    Serial.print("X: ");
    // 시리얼모니터에 X방향 움직임 표시
    Serial.print(X);

    Serial.print("\t");

    Serial.print("Y: ");
    // 시리얼모니터에 Y방향 움직임 표시
    Serial.println(Y);
    delay(1000);
}