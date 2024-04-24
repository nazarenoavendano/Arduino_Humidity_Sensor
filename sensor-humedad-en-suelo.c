//CÓDIGO SENSOR SUELO HUMEDO
int sensorPin = A0;
int ledPin = 7;
int humedad;
int delayTime = 1000;
String msg = "La humedad es: ";

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  int humedad = analogRead(sensorPin);
  Serial.println();
  Serial.print(msg);
  Serial.println(humedad);

  if (humedad <= 500) {

    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
  delay(delayTime);
}
