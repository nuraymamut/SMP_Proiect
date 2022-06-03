#include <Servo.h>

#define BUTTON_PIN2 9
#define LED_PIN 8
#define BUTTON_PIN 7
#define LED_PIN2 5

Servo myservo;
byte lastButtonState = LOW;
byte lastButtonState2 = LOW;
byte ledState;
int count = 0; 
unsigned long debounceDuration = 50;
unsigned long lastTimeButtonStateChanged = 0;


void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(BUTTON_PIN2, INPUT);
  myservo.attach(6);
  myservo.writeMicroseconds(1500);
}
void loop() {
  myservo.detach();

  if (millis() - lastTimeButtonStateChanged > debounceDuration) {
    byte buttonState = digitalRead(BUTTON_PIN);
    byte buttonState2 = digitalRead(BUTTON_PIN2);
    if (buttonState != lastButtonState) {
      lastTimeButtonStateChanged = millis();
      lastButtonState = buttonState;      
      button1(buttonState);
    } else if (buttonState2 != lastButtonState2) {
        lastTimeButtonStateChanged = millis();
        lastButtonState2 = buttonState2;
        button2(buttonState2);
    } 
  }
}

void button1(byte buttonState) {
  if (buttonState == LOW)  {
    count++; 
    if (count < 3) {
      digitalWrite(LED_PIN, HIGH);
      motor();
      digitalWrite(LED_PIN, LOW);
    }
    else if(count==3) {
      digitalWrite(LED_PIN, HIGH);
      motor();
      digitalWrite(LED_PIN, LOW);
      digitalWrite(LED_PIN2, HIGH);
    }             
    else {
      digitalWrite(LED_PIN2, HIGH);
    }
  } 
}

void button2(byte buttonState2) {
  ledState = digitalRead(LED_PIN2);
  if (buttonState2 == LOW)  {
    count--;
    motor();
    if (count < 3) {
      digitalWrite(LED_PIN2, LOW);
    }
  } 
}

void motor() {
  myservo.attach(6);
  delay(1000);

  // valorile de mai jos sunt specifice doar 
  // servomotorului meu din cate am observat
  myservo.write(93); // motorul se misca antiorar
  delay(3000);

  myservo.write(89); // motorul in stare neutra
  delay(2000);
  
  myservo.write(86); // motorul se misca in sens orar 
  delay(3000);
}




