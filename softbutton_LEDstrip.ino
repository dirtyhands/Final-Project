int RedPin = A0;
int GreenPin = A1;
int BluePin = A2;

int buttonAnalogPin = A3; //analog pin for button
int buttonReading; //keeping track of what state the button is in

void setup() {
  Serial.begin(9600);

  pinMode(buttonAnalogPin, INPUT);

  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);

}

void loop() {
  buttonReading = analogRead(buttonAnalogPin);
  Serial.print("Analog reading = ");
  Serial.println(buttonReading);

  if (buttonReading > 100) {
    analogWrite(RedPin, 160);
    analogWrite(GreenPin, 32);
    analogWrite(BluePin, 240);
  }

  else if (buttonReading <= 100) {
    analogWrite(RedPin, 0);
    analogWrite(GreenPin, 0);
    analogWrite(BluePin, 0);
  }

}
