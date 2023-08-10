/*
    District P
    아두이노 코딩#8
    인체감지센서를 이용한 센서등 코드
*/

int PIR_pin = 12;
int LED_pin = 8;

void setup() {
    pinMode(PIR_pin, INPUT);
    pinMode(LED_pin, OUTPUT);
}

void printTmp(float tmp) {
    
}

void loop() {
    int ifIsHuman = digitalRead(PIR_pin);

    if (ifIsHuman == HIGH) {
        digitalWrite(LED_pin, HIGH);
        delay(5000);
    } else {
        digitalWrite(LED_pin, LOW);
    }
}