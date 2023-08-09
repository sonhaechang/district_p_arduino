/*
    District P
    아두이노 코딩#9-2
    3색 LED를 이용한 신호등 코드
*/

#define MAX_LED_CNT 3
#define MAX_COLOR_CNT 3
unsigned char LEDS[MAX_LED_CNT] = {11, 10, 9};
unsigned char COLORS[MAX_COLOR_CNT][MAX_LED_CNT] = {
    {255, 0, 0}, // red
    {0, 255, 0}, // green
    {255, 127, 0}, // orage
};

void setup() {  
    for (int i=0; i<MAX_LED_CNT; i++) {
        pinMode(LEDS[i], OUTPUT);
    }
}

void loop() {  
    for (int i=0; i<MAX_COLOR_CNT; i++) {
        for (int j=0; j<MAX_LED_CNT; j++) {
            analogWrite(LEDS[j], COLORS[i][j]);
        }
        
        if (i < 2) {
            delay(5000);
        } else {
            delay(3000);
        }
    }
}