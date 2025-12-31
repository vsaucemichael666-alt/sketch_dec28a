int trig = 3;
int echo = 5;
int buzzer = 6;
void setup()
{
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
pinMode(buzzer, OUTPUT);
}

void loop()
{
digitalWrite(trig, LOW);
delayMicroseconds(10);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
  
int time = pulseIn(echo, HIGH);
int dist = time * 0.034 / 2;
delay(100);
  if (dist > 300) {
    noTone(buzzer);
  }
  else if (dist < 300 && dist >= 200) {
    tone(buzzer, 500);
    delay(100);
    noTone(buzzer);
    delay(100);
  }
  else if (dist < 200 && dist >= 100) {
    tone(buzzer, 1000);
    delay(100);
    noTone(buzzer);
    delay(100);
 
  }
  else if (dist < 100 && dist >= 50) {
    tone(buzzer, 1500);
    delay(100);
    noTone(buzzer);
    delay(100);
  
}
  else if (dist < 50) {
    tone(buzzer, 2000);
    delay(100);
    noTone(buzzer);
    delay(100);
  }
}