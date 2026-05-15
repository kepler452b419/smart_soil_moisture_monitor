#define SOIL_MOISTURE_PIN 34   

int sensorValue = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("Soil Moisture Sensor Test");
}

void loop() {

  sensorValue = analogRead(SOIL_MOISTURE_PIN);

  Serial.print("Soil Moisture Value: ");
  Serial.println(sensorValue);


  if (sensorValue > 3000) {
    Serial.println("Soil is Dry");
  }
  else if (sensorValue > 1500) {
    Serial.println("Soil is Moist");
  }
  else {
    Serial.println("Soil is Wet");
  }

  Serial.println("------------------------");

  delay(2000);
}