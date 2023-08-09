/*
    District P
    아두이노 코딩#4-2
    스위치 점등회로2 코드
*/

int R_LED_pin = 12;
int G_LED_pin = 13;
int SW_pin1 = 4;
int SW_pin2 = 5;

void setup() {
    pinMode(R_LED_pin, OUTPUT);
    pinMode(G_LED_pin, OUTPUT);
    pinMode(SW_pin1, INPUT_PULLUP);
    pinMode(SW_pin2, INPUT_PULLUP);
}

void loop() {
    if ((digitalRead(SW_pin1) == LOW) && (digitalRead(SW_pin2) == LOW)){
        digitalWrite(R_LED_pin, HIGH);   
        digitalWrite(G_LED_pin, HIGH);   
    } else if (digitalRead(SW_pin1) == LOW) {
        digitalWrite(R_LED_pin, HIGH);
        digitalWrite(G_LED_pin, LOW); 
    } else if (digitalRead(SW_pin2) == LOW) {
        digitalWrite(R_LED_pin, LOW);
        digitalWrite(G_LED_pin, HIGH);
    } else {
        digitalWrite(R_LED_pin, LOW);
        digitalWrite(G_LED_pin, LOW);
    }
}