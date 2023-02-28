//Aidan Iannetti
int delayT = 250;
void setup() {

  pinMode(8, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}


void loop() {
  digitalWrite(9,LOW);
  while(digitalRead(8) == HIGH){
    digitalWrite(5, HIGH);
    delay(delayT);
    digitalWrite(5, LOW);
    delay(delayT);

    digitalWrite(6, HIGH);
    delay(delayT);
    digitalWrite(6, LOW);
    delay(delayT);

    digitalWrite(7, HIGH);
    delay(delayT);
    digitalWrite(7, LOW);
    delay(delayT);
  }
}
