int sensor1 = 2;     // right sensor
int sensor2 = 3;     // left sensor
int m11=7;            // connect to pin 2 of L293d  right motor
int m12=8;            // connect to pin 7 of L293d
int m21=9;            // connect to pin 10 of L293d  left motor
int m22=10;            // connect to pin 14 of L293d
int s1,s2;

void setup() {
  // put your setup code here, to run once:
pinMode(sensor1, INPUT);
pinMode(sensor2, INPUT);
pinMode(m11, OUTPUT);
pinMode(m12, OUTPUT);
pinMode(m21, OUTPUT);
pinMode(m22, OUTPUT);
}

void loop() {
  s1=digitalRead(sensor1);
  s2=digitalRead(sensor2);
  // go straight
if(s1 == 1 && s2 == 1)
{
  digitalWrite(m11, LOW);
  digitalWrite(m12, HIGH);
    digitalWrite(m21, LOW);
  digitalWrite(m22, HIGH);
  delay(250);
}
  // have left turn
if(s1 == 1 && s2 == 0)
{
  digitalWrite(m11, LOW);
  digitalWrite(m12, HIGH);
    digitalWrite(m21, LOW);
  digitalWrite(m22, LOW);
  delay(250);
}


  // have right turn
if(s1 == 0 && s2 == 1)
{
  digitalWrite(m11, LOW);
  digitalWrite(m12, LOW);
    digitalWrite(m21, HIGH);
  digitalWrite(m22, LOW);
  delay(250);
}


  // stop
if(s1 == 0 && s2 == 0)
{
  digitalWrite(m11, LOW);
  digitalWrite(m12, LOW);
    digitalWrite(m21, LOW);
  digitalWrite(m22, LOW);
  delay(250);
}


}

