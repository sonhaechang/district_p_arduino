/*
    District P
    아두이노 코딩#18-2
    조이스틱 모듈 다루기
*/

// 조이스틱 버튼은 아두이노 12번 핀
int push_pin = 12;
// 조이스틱 X방향은 아두이노 A0핀
int pos_X = A0;
// 조이스틱 Y방향은 아두이노 A1핀
int pos_Y = A1;

#define MAX_LED_CNT 5
// LED 순서: 좌, 우, 상, 하, 버튼 누름
unsigned char LEDS[MAX_LED_CNT] = {11, 10, 6, 5, 2};

void setup() {
    // 조이스틱 버튼은 INPUT_PULLUP
    pinMode(push_pin, INPUT_PULLUP);
    
    // LED들은 모두 OUTPUT으로 설정
    for (int i=0; i<MAX_LED_CNT; i++) {
        pinMode(LEDS[i], OUTPUT);
    }
}

void loop() {
    // 조이스틱의 X축 움직임을 X변수에 저장
    int X = analogRead(pos_X);
    // 조이스틱의 Y축 움직임을 Y변수에 저장
    int Y = analogRead(pos_Y);

    // 조이스틱 버튼을 누를 경우
    if (digitalRead(push_pin) == LOW) {
        digitalWrite(LEDS[4], HIGH);
    } else {
        digitalWrite(LEDS[4], LOW);
    }

    // 조이스틱을 좌측으로 움직인 경우
    if (X<480) {
        // 움직임 정도에 따라 좌측 LED 밝기 조절
        analogWrite(LEDS[0], map(X, 480, 0, 0, 255));
        // 우측 LED는 끔
        analogWrite(LEDS[1], 0);
    // 조이스틱을 우측으로 움직인 경우
    } else if (X>520) {
        // 좌측 LED는 끔
        analogWrite(LEDS[0], 0);
        // 우측 LED는 움직임 정도에 따라 밝기 조절
        analogWrite(LEDS[1], map(X, 520, 1023, 0, 255));
    // 조이스틱을 X축방향으로 움직이지 않은 경우
    } else {
        // 좌, 우 LED 둘다 끔
        analogWrite(LEDS[0], 0);
        analogWrite(LEDS[1], 0);
    }

    // 조이스틱을 상측으로 움직인 경우
    if (Y<480) {
        // 움직임 정도에 따라 상측 LED 밝기 조절
        analogWrite(LEDS[2], map(Y, 480, 0, 0, 255));
        // 하측 LED는 끔
        analogWrite(LEDS[3], 0);
    // 조이스틱을 하측으로 움직인 경우
    } else if (Y>520) {
        // 상측 LED는 끔
        analogWrite(LEDS[2], 0);
        // 움직임 정도에 따라 하측 LED 밝기 조절
        analogWrite(LEDS[3], map(Y, 520, 1023, 0, 255));
    // 조이스틱을 Y축방향으로 움직이지 않은 경우
    } else {
        // 상, 하 LED 둘다 끔
        analogWrite(LEDS[2], 0);
        analogWrite(LEDS[3], 0);
    }
}