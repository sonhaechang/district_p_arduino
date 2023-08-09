/*
    District P
    아두이노 코딩#12
    초음파거리센서 다루기 코드
*/

// trig 핀을 아두이노의 13번핀에 연결
int trig_pin = 13;	
// echo 핀을 아두이노의 12번핀에 연결
int echo_pin = 12; 
int LED_pin = 8;

void setup() {
    // 시리얼 통신 시작
    Serial.begin(9600);	
    
    // trig_pin은 아두이노의 신호를 받으므로 출력모드로 설정
    pinMode(trig_pin, OUTPUT);	
    // echo_pin은 아두이노에 신호를 주므로 입력모드
    pinMode(echo_pin, INPUT);		
    
    pinMode(LED_pin, OUTPUT);
}
void loop() {  
    // 초음파를 10us(마이크로 초)동안 발사
    digitalWrite(trig_pin, LOW);
    digitalWrite(echo_pin, LOW);
    delayMicroseconds(2);
    digitalWrite(trig_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig_pin, LOW);

  
    // echo_pin이 HIGH가 될때까지의 시간을 duration 변수에 저장
    unsigned long duration = pulseIn(echo_pin, HIGH); 

    // 거리를 계산
    float distance = ((float)(340 * duration) / 10000) / 2;  

    if (distance <= 11.00) {
        digitalWrite(LED_pin, HIGH);
        delay(5000);
    } else {
        digitalWrite(LED_pin, LOW);
    }

    // 거리를 출력
    Serial.print(distance);
    Serial.println("cm");
    
    delay(500);
}