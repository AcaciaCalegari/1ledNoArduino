void setup() {
 pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(10, HIGH);
  delay(1000); //pausa de 1 seg pq ta em milisegundo
  digitalWrite(10, LOW);
  delay(1000);//pausa de 1 seg pq ta em milisegundo

}