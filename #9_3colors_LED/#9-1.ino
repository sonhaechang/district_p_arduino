/*
    District P
    아두이노 코딩#9-1
    3색 LED로 다양한색 표현하기 코드
*/

#define MAX_LED_CNT 3
#define MAX_COLOR_CNT 7
unsigned char LEDS[MAX_LED_CNT] = {11, 10, 9};
unsigned char COLORS[MAX_COLOR_CNT][MAX_LED_CNT] = {
    {255, 0, 0}, // red
    {0, 255, 0}, // green
    {0, 0, 255}, // blue
    {255, 255, 0}, // yellow
    {255, 0, 255}, // purple 
    {0, 255, 255}, // turquoise
    {255, 255, 255}, // white
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
       
       delay(500);
    }
}