// Define os pinos do led RGB
int Verde = 13;
int Azul = 12;
int Vermelho = 11;

// Define os pinos do DIP
int DIPVermelho = 7;
int DIPAzul = 6;
int DIPVerde = 5;

void setup() {
    // Pinos do led como saída
    pinMode(Verde, OUTPUT);
    pinMode(Azul, OUTPUT);
    pinMode(Vermelho, OUTPUT);

    //Pinos do DIP como entrada
    pinMode(DIPVermelho, INPUT_PULLUP);
    pinMode(DIPVerde, INPUT_PULLUP);
    pinMode(DIPAzul, INPUT_PULLUP);
}

void loop() {
    int vermelho = digitalRead(DIPVermelho) == LOW;
    int verde = digitalRead(DIPVerde) == LOW;
    int azul = digitalRead(DIPAzul) == LOW;

    digitalWrite(Vermelho, vermelho ? HIGH : LOW);
    digitalWrite(Verde, verde ? HIGH : LOW);
    digitalWrite(Azul, azul ? HIGH : LOW);
}