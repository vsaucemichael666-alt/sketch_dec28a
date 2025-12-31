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

  if (dist >= 20) {
    tone(buzzer, 100);
  }
  else if (dist < 20 && dist >= 10) {
    tone(buzzer, 500);
    delay(100);
    noTone(buzzer);
    delay(100);
  }
  else if (dist < 10) {
    tone(buzzer, 1000);
    delay(50);
    noTone(buzzer);
    delay(50);
 
  }
  else if (dist > 25) {
    noTone(buzzer);
  }
}