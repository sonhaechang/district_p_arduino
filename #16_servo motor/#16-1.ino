/*
    District P
    아두이노 코딩#16-1
    서보모터 다루기 코드
*/

// 서보모터 라이브러리 불러옴
#include <Servo.h>
// 서보모터 class 선언
Servo myservo;

// 서보모터의 팔을 기울기 설정
#define AMX_ANGLE_CNT 4
unsigned char ANGLES[AMX_ANGLE_CNT] = {45, 90, 135, 90};
// 서보모터 제어핀을 11번으로
int ctrl_pin = 11;

void setup() {
    // 서보모터를 제어핀으로 제어하겠다고 선언
    myservo.attach(ctrl_pin);
}

void loop() {
    for (int i=0; i<AMX_ANGLE_CNT; i++) {
        myservo.write(ANGLES[i]);
        delay(1000);
    }
}