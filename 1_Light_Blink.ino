//Aidan Iannetti
void setup() {

  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
}


void loop() {
  digitalWrite(9,LOW);
  while(digitalRead(8) == HIGH){
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);
    delay(500);
  }
}

//Vincent Jackson
//Stephen Layton
