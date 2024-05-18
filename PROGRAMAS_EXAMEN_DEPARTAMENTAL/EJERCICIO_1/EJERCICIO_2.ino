int pinLDR = A0;
int pinLED = 9;
int valorLDR = 0;

void setup() {

  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  valorLDR = analogRead(pinLDR);

  Serial.println(valorLDR);
  int brilloLED = map(valorLDR, 0, 1023, 0, 255);

  analogWrite(pinLED, brilloLED);

  delay(100);
}