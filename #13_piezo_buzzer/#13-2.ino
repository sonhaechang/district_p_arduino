/*
    District P
    아두이노 코딩#13-2
    피에조 부저 응용 코드
*/

int piezo_pin = 11;
int sw_pin = 9;

int A = 440;
int B = 494;
int C = 261;
int D = 294;
int E = 330;
int F = 349;
int G = 392;
int N = 0; // 한박자 쉬는 것

// 전체 음의 수
#define MAX_NUM_TONES_CNT 32
unsigned char TONES[MAX_NUM_TONES_CNT] = {
    G,G,A,A,G,G,E,E,G,G,E,E,D,D,D,N,G,G,A,A,G,G,E,E,G,E,D,E,C,C,C,N
};

void setup() {
    pinMode(piezo_pin, OUTPUT);
    pinMode(sw_pin, INPUT_PULLUP);
}
void loop() {
    // 스위치가 연결된 핀의 로직레벨이 LOW라면(버튼이 눌렸다면)
    if (digitalRead(sw_pin) == LOW) {
        // MAX_NUM_TONES_CNT(32)의 수만큼 반복 실행
        // tone함수를 통해 부저에서 소리가 남 
        // TONES[]배열에 있는 주파수에 해당하는 음 출력
        for (int i=0; i<MAX_NUM_TONES_CNT; i++) {
            tone(piezo_pin, TONES[i]);
            // 0.5초 동안 대기
            delay(500);
        }
        // 부저의 소리 중지
        noTone(piezo_pin);
    }
}