// TrincaVolts 3.0 - controle básico Arduino

const int botaoPin = 2;
const int ledVermelho = 9;
const int ledVerde = 10;
const int ledAzul = 11;
const int coolerPin = 3;

void setup() {
  pinMode(botaoPin, INPUT_PULLUP);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(coolerPin, OUTPUT);
  
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAzul, LOW);
  digitalWrite(coolerPin, LOW);
}

void loop() {
  if(digitalRead(botaoPin) == LOW) { // botão apertado
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAzul, HIGH);
    digitalWrite(coolerPin, HIGH);
    delay(3000); // liga por 3 segundos
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAzul, LOW);
    digitalWrite(coolerPin, LOW);
  }
}
