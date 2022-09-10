int pinLED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED, OUTPUT); //Menyiapkan LED siap bekerja
  Serial.begin(9600);
  Serial.println("Alat menyala dan siap digunakan !");
 

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLED, HIGH); //Menyiapkan LED Board Arduino
  Serial.println("Lampu Nyala");
  delay(200);
  digitalWrite(pinLED, LOW); //Menyiapkan LED Board Arduino
  Serial.println("Lampu Mati");
  delay(200);
}
