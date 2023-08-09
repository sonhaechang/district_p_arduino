/*
    District P
    아두이노 코딩#4-1
    스위치 점등회로1 코드
*/

// 아두이노의 12번 핀을 LED 핀으로 사용 
int LED_pin = 12;        
// 아두이노의 4번 핀을 스위치 핀으로 사용 
int SW_pin = 4;           

void setup() {
    // LED 핀을 출력으로 사용
    pinMode(LED_pin, OUTPUT);
    // 스위치 핀을 풀업저항이 있는 입력으로 사용
    pinMode(SW_pin, INPUT_PULLUP);
}

void loop() {
    // 스위치 핀에 0V가 들어올때, 즉, 스위치를 눌렀을때
    if (digitalRead(SW_pin) == LOW) {
      // LED핀에 5V를 출력하여 LED를 켬
      digitalWrite(LED_pin, HIGH);
    // 스위치 핀에 0V가 안들어올때, 즉, 스위치를 안눌렀을때
    } else {
      // LED핀에 0V를 출력하여 LED를 끔
      digitalWrite(LED_pin, LOW);
    }
}