int ledPin = 7;
int buttonPin = 2;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop(){
  if (digitalRead(buttonPin) == LOW){
    digitalWrite(ledPin, HIGH);
  }

  else{
    digitalWrite(ledPin, LOW);
  }
}