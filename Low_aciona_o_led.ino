
/*Pratica 1 Esp 8266
 * Blink led placa. 
 */
bool chave;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(D1, INPUT_PULLUP); // inicializa o D1 como entrada Pullup, botão puch botton físico.
pinMode(D4, OUTPUT); // inicializa o led da placa como saida

}

void loop() {
  // put your main code here, to run repeatedly:
  
chave = digitalRead(D1); // bool signifca logica boleana 0 ou 1

Serial.print("D1=");
Serial.println(chave); // Serial print utilizado para verificar a situação atual do comando ou condição
delay(1000);
if (chave == LOW){

  digitalWrite (D4, LOW); // LOW Aciona o LED
  Serial.println(" LED LIGADO");
} else {
  digitalWrite (D4, HIGH); // HIGH Apaga o LED
  Serial.println(" LED DESLIGADO");

}

}
