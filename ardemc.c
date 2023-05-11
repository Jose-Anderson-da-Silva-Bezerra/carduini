// Definindo o pino para o LED
int ledPin = 13;

void setup() {
  // Configurando o pino como saída
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Acendendo o LED
  digitalWrite(ledPin, HIGH);
  delay(1000); // Aguardando 1 segundo
  // Desligando o LED
  digitalWrite(ledPin, LOW);
  delay(1000); // Aguardando 1 segundo
}
