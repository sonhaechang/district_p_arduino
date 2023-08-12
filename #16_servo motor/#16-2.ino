/*
    District P
    아두이노 코딩#16-2
    서보모터 다루기 코드
*/

// 서보모터 라이브러리 불러옴
#include <Servo.h>
// 서보모터 class 선언
Servo myservo;

// 서보모터 제어핀을 11번으로
int ctrl_pin = 11;

void setup() {
    // 서보모터를 제어핀으로 제어하겠다고 선언
    myservo.attach(ctrl_pin);
}

void loop() {
    // i가 10에서 170까지
    for (int i=10; i<170; i++) {
        // 서보모터를 i도 만큼 움직임
        myservo.write(i);
        // 5ms동안 기다림
        delay(5);
    }

    // i가 170에서 10까지
    for (int i=170; i>10; i--) {
        myservo.write(i);
        delay(5);
    }
}
