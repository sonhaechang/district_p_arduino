/*
    District P
    아두이노 코딩#13-1
    피에조부저 다루기 코드
*/

#define MAX_NUM_TONES_CNT 8
unsigned char TONES[MAX_NUM_TONES_CNT] = {261, 294, 330, 349, 392, 440, 494, 523};

int piezo_pin = 11;	
int sw_pin = 9; 

void setup() {    
    pinMode(piezo_pin, OUTPUT);	
    pinMode(sw_pin, INPUT_PULLUP);		
}
void loop() {  
    // 스위치가 연결된 핀의 로직레벨이 LOW라면(버튼이 눌렸다면)
    if(digitalRead(sw_pin) == LOW) {
        // MAX_NUM_TONES_CNT(8)의 수만큼 반복 실행
        // tone함수를 통해 부저에서 소리가 남 
        // TONES[]배열에 있는 주파수에 해당하는 음 출력
        for(int i=0; i<MAX_NUM_TONES_CNT; i++) {
            tone(piezo_pin, TONES[i]);
            delay(500);
        }
        // 부저의 소리 중지
        noTone(piezo_pin);
    }
}