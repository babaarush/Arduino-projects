void setup(){
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop(){
  digitalWrite(5, HIGH);       // Code for blue LED
  delay(1000);
  digitalWrite(5, LOW);
  delay(1000);

  digitalWrite(7, HIGH);       // Code for red LED
  delay(2000);
  digitalWrite(7, LOW);
  delay(1000);
}