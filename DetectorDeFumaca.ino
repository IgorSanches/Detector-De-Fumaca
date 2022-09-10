// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  if (analogRead(A0) > 600) {
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    delay(5000); // Wait for 5000 millisecond(s)
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    delay(3000); // Wait for 3000 millisecond(s)
  } else {
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }

  digitalWrite(0, HIGH);
}