int b1 = 2;
int b2 = 3;
int r1 = 4;
int r2 = 5;

int t = 50;
int t2 = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  red();
  red();
  blue();
  blue();
}

void red(){
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  delay(t);
  digitalWrite(r1, LOW);
  digitalWrite(r2, LOW);
  delay(t);
}

void blue(){
  digitalWrite(b1, HIGH);
  digitalWrite(b2, HIGH);
  delay(t2);
  digitalWrite(b1, LOW);
  digitalWrite(b2, LOW);
  delay(t2);
}
