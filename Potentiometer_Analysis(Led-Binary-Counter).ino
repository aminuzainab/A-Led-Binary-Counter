int voltPin = A2;
int voltPinValue;
int redPin = 11;
int yellowPin = 10;
int greenPin = 9;
float volt;
int delayT = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  voltPinValue = analogRead(voltPin);
  volt = (5.0/1023.0) * voltPinValue;

  if (volt<=3.0) {
    Serial.println("Red: " + String(volt));
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);


  }


  else if (volt>3.0 && volt<=4.0) {
    Serial.println("Yellow: " + String(volt));
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);

  }


  else {
    Serial.println("Green: " + String(volt));
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);

  }

  delay(delayT);

}
