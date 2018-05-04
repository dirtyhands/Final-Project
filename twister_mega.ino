int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;
int button5 = 6;
int button6 = 7;
int button7 = 8;
int button8 = 9;
int button9 = 10;
int button10 = 11;
int button11 = 12;
int button12 = 13;
int button13 = 14;
int button14 = 15;
int button15 = 16;
int button16 = 17;
int button17 = 18;
int button18 = 19;
int button19 = 20;
int button20 = 21;
int button21 = 22;
int button22 = 23;
int button23 = 24;
int button24 = 25;
int button25 = 26;
int button26 = 27;
int button27 = 28;
int button28 = 29;

int button1Reading;
int button2Reading;
int button3Reading;
int button4Reading;
int button5Reading;
int button6Reading;
int button7Reading;
int button8Reading;
int button9Reading;
int button10Reading;
int button11Reading;
int button12Reading;
int button13Reading;
int button14Reading;
int button15Reading;
int button16Reading;
int button17Reading;
int button18Reading;
int button19Reading;
int button20Reading;
int button21Reading;
int button22Reading;
int button23Reading; 
int button24Reading;
int button25Reading;
int button26Reading;
int button27Reading;
int button28Reading;

int redPin = A0;
int greenPin = A1;
int bluePin = A2;

//hold
unsigned long time;
int hold = 0;
int tBegin = 0;
int tEnd = 0;
int tTime = 3000; //players must hold their position on the mat for 3 seconds


void setup() {
  // put your setup code here, to run once:
  Serial.print(9600);

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);
  pinMode(button6, INPUT_PULLUP);
  pinMode(button7, INPUT_PULLUP);
  pinMode(button8, INPUT_PULLUP);
  pinMode(button9, INPUT_PULLUP);
  pinMode(button10, INPUT_PULLUP);
  pinMode(button11, INPUT_PULLUP);
  pinMode(button12, INPUT_PULLUP);
  pinMode(button13, INPUT_PULLUP);
  pinMode(button14, INPUT_PULLUP);
  pinMode(button15, INPUT_PULLUP);
  pinMode(button16, INPUT_PULLUP);
  pinMode(button17, INPUT_PULLUP);
  pinMode(button18, INPUT_PULLUP);
  pinMode(button19, INPUT_PULLUP);
  pinMode(button20, INPUT_PULLUP);
  pinMode(button21, INPUT_PULLUP);
  pinMode(button22, INPUT_PULLUP);
  pinMode(button23, INPUT_PULLUP);
  pinMode(button24, INPUT_PULLUP);
  pinMode(button25, INPUT_PULLUP);
  pinMode(button26, INPUT_PULLUP);
  pinMode(button27, INPUT_PULLUP);
  pinMode(button28, INPUT_PULLUP);
  pinMode(button29, INPUT_PULLUP);
  pinMode(button30, INPUT_PULLUP);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  time = millis();

}

void loop() {
  // put your main code here, to run repeatedly:
  int button1Reading = digitalRead(button1);
  int button2Reading = digitalRead(button2);
  int button3Reading = digitalRead(button3);
  int button4Reading = digitalRead(button4);
  int button5Reading = digitalRead(button5);
  int button6Reading = digitalRead(button6);
  int button7Reading = digitalRead(button7);
  int button8Reading = digitalRead(button8);
  int button9Reading = digitalRead(button9);
  int button10Reading = digitalRead(button10);
  int button11Reading = digitalRead(button11);
  int button12Reading = digitalRead(button12);
  int button13Reading = digitalRead(button13);
  int button14Reading = digitalRead(button14);
  int button15Reading = digitalRead(button15);
  int button16Reading = digitalRead(button16);
  int button17Reading = digitalRead(button17);
  int button18Reading = digitalRead(button18);
  int button19Reading = digitalRead(button19);
  int button20Reading = digitalRead(button20);
  int button21Reading = digitalRead(button21);
  int button22Reading = digitalRead(button22);
  int button23Reading = digitalRead(button23);
  int button24Reading = digitalRead(button24);
  int button25Reading = digitalRead(button25);
  int button26Reading = digitalRead(button26);
  int button27Reading = digitalRead(button27);
  int button28Reading = digitalRead(button28);


  //turn on green light if LED challenge is completed
  if (button5 == HIGH && button8 == HIGH && button13 == HIGH && button19 == HIGH && button24 == HIGH && button25 == HIGH) {
    analogWrite(greenPin, 255);
  }

  //turn on blue light if servo challenge is completed
  if (button3 == HIGH && button4 == HIGH && button5 == HIGH && button7 == HIGH && button9 == HIGH && button14 == HIGH && button19 == HIGH && button22 == HIGH && button27 == HIGH && button28 == HIGH) {
    analogWrite(bluePin, 255);
  }

  //turn on red light if dc1 challenge is completed
  if (button5 == HIGH && button7 == HIGH && button15 == HIGH && button20 == HIGH && button22 == HIGH && button27 == HIGH && button28 == HIGH) {
    analogWrite(redPin, 255);
  }
}
