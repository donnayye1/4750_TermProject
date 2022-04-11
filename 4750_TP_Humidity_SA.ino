 #include "DHT.h"
 #define DHTPIN 2              // I/O pin of Arduino
 #define DHTTYPE DHT11
 DHT dht(DHTPIN, DHTTYPE);     
 
void setup() {
  Serial.begin(115200);
  Serial.println(F("DHT11 TEST"));
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();                 // Storing data into float 'h'
  float t = dht.readTemperature(true);         
  if(isnan(h) || isnan(t)){                     // Used for undefined/non-representable values for floating-point elements
    Serial.println(F("Failed to read from DHT sensor"));
    return;
  }
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("%");
  Serial.println(" ");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print("°F");
  delay(1000);
}
