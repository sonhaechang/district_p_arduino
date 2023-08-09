/*
    District P
    아두이노 코딩#6-1
    LED 밝기 조절하기
*/

#define MAX_BRIGHT_CNT 4
unsigned char BRIGHTS[MAX_BRIGHT_CNT] = {0, 128, 192, 255};
int LED_pin = 11;

void setup() {  
    pinMode(LED_pin, OUTPUT);
}

void loop() {  
    for (int i=0; i<MAX_BRIGHT_CNT; i++) {
        analogWrite(LED_pin, BRIGHTS[i]);
        delay(1000);
    }
}