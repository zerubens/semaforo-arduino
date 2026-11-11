// Semáforo — versão 2 (carros + pedestres)
const int VERMELHO = 12;
const int AMARELO  = 11;
const int VERDE    = 10;

const int PED_VERMELHO = 9;
const int PED_VERDE    = 8;

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(PED_VERMELHO, OUTPUT);
  pinMode(PED_VERDE, OUTPUT);
}

void loop() {
  // Fase verde: carros seguem, pedestres esperam
  digitalWrite(VERDE, HIGH);
  digitalWrite(PED_VERMELHO, HIGH);
  delay(4000);
  digitalWrite(VERDE, LOW);

  // Fase amarela: carros se preparam para parar
  digitalWrite(AMARELO, HIGH);
  delay(2000);
  digitalWrite(AMARELO, LOW);

  // Fase vermelha: carros param, pedestres atravessam
  digitalWrite(VERMELHO, HIGH);
  digitalWrite(PED_VERMELHO, LOW);
  digitalWrite(PED_VERDE, HIGH);
  delay(5000);
  digitalWrite(PED_VERDE, LOW);
  digitalWrite(VERMELHO, LOW);
}