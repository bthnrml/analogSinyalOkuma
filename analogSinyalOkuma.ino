int sensorPin = A0;
int tempPin = A1;
int ledPin = 13;
int sensorValue = 0;
int tempValue = 0;
float sicaklikGerilim = 0;
float sicaklik = 0;
void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  }

void loop() {
  sensorValue=analogRead(sensorPin);
  delay(20);
  tempValue = analogRead(tempPin);
  sicaklikGerilim=(tempValue/1023.0)*5000;
  sicaklik = sicaklikGerilim/10.0;
  digitalWrite(ledPin,HIGH);

  Serial.print("Direnc Degeri: ");
  Serial.println(sensorValue);
  Serial.print("Sicaklik Degeri: ");
  Serial.println(sicaklik);
  delay(1000);

  digitalWrite(ledPin,LOW);
  delay(1000);
}
