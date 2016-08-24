// Temperature Sensor Test
// DHT11 on Digital 0
// DHT11 on Digital 1
// DHT22 on Digital 2
#include "DHT.h"

GSW::DHT dht1(0, 11);
GSW::DHT dht2(1, 11);
GSW::DHT dht3(2, 22);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11#1 H,DHT11#1 T,DHT11#2 H,DHT11#2 T,DHT22#3 H,DHT22#3 T");
  dht1.begin();
  dht2.begin();
  dht3.begin();
}

void loop() {
  delay(5000);

  // DHT11 #1
  float h1 = dht1.readHumidity();
  float t1 = dht1.readTemperature();

  if (isnan(h1) || isnan(t1)) {
    Serial.print("ERROR,ERROR,");
  } else {
    Serial.print(h1);
    Serial.print(",");
    Serial.print(t1);
    Serial.print(",");
  }

  // DHT11 #2
  float h2 = dht2.readHumidity();
  float t2 = dht2.readTemperature();

  if (isnan(h2) || isnan(t2)) {
    Serial.print("ERROR,ERROR,");
  } else {
    Serial.print(h2);
    Serial.print(",");
    Serial.print(t2);
    Serial.print(",");
  }

  // DHT22 #3
  float h3 = dht3.readHumidity();
  float t3 = dht3.readTemperature();

  if (isnan(h3) || isnan(t3)) {
    Serial.println("ERROR,ERROR");
  } else {
    Serial.print(h3);
    Serial.print(",");
    Serial.print(t3);
    Serial.println();
  }
}
