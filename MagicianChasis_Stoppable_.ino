//constant ints
byte leftForward = 5;
byte leftReverse = 6;
byte rightForward = 9;
byte rightReverse = 10;

void robotForward() {
  digitalWrite(leftForward,HIGH);
  digitalWrite(rightForward,HIGH);
  digitalWrite(leftReverse,LOW);
  digitalWrite(rightReverse,LOW);
}

void robotLeft() { 
  digitalWrite(leftForward,LOW);
  digitalWrite(rightForward,HIGH);
  digitalWrite(leftReverse,HIGH);
  digitalWrite(rightReverse,LOW);
}

void robotRight() { 
  digitalWrite(leftForward,HIGH);
  digitalWrite(rightForward,LOW);
  digitalWrite(leftReverse,LOW);
  digitalWrite(rightReverse,HIGH);
}

void robotReverse(){
  digitalWrite(leftForward,LOW);
  digitalWrite(rightForward,LOW);
  digitalWrite(leftReverse,HIGH);
  digitalWrite(rightReverse,HIGH);
}

void robotStop(){
  digitalWrite(leftForward,LOW);
  digitalWrite(rightForward,LOW);
  digitalWrite(leftReverse,LOW);
  digitalWrite(rightReverse,LOW);
}

void setup() {
  // put your setup code here, to run once:
  //
pinMode(leftForward,OUTPUT);
pinMode(rightForward,OUTPUT);
pinMode(leftReverse,OUTPUT);
pinMode(rightReverse,OUTPUT);
robotForward();
delay(5000);
robotLeft();
delay(2000);
robotRight();
delay(2000);
robotReverse();
delay(5000);
robotStop();

}

void loop() {
  // put your main code here, to run repeatedly:

//test loop, should go back to where it starts

}
