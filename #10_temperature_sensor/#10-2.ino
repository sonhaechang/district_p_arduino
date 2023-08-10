/*
    District P
    아두이노 코딩#10-2
    온도센서와 LED를 이용해 특정 온도에서 특정 색상 LED 점멸 코드
*/

#define MAX_LED_CNT 3
unsigned char LEDS[MAX_LED_CNT] = {7, 4, 2};
int TMP_pin = A0;

void setup() {
    Serial.begin(9600);

    for (int i=0; i<MAX_LED_CNT; i++) {
        pinMode(LEDS[i], OUTPUT);
    }
}

void printTmp(float tmp) {
    
}

void loop() {
    int TMP = analogRead(TMP_pin);
    float tempaeratureC = (TMP*5.0/1024.0-0.5) * 100;
    
    if (tempaeratureC < 26.00) {
        digitalWrite(LEDS[2], LOW);
        digitalWrite(LEDS[1], LOW);
        digitalWrite(LEDS[0], HIGH);
    } else if (tempaeratureC > 27.50) {
        digitalWrite(LEDS[0], LOW);
        digitalWrite(LEDS[1], LOW);
        digitalWrite(LEDS[2], HIGH);
    } else {
        digitalWrite(LEDS[2], LOW);
        digitalWrite(LEDS[0], LOW);
        digitalWrite(LEDS[1], HIGH);
    }

    Serial.print(tempaeratureC);
    Serial.println(" degrees C");
    delay(1000);
}