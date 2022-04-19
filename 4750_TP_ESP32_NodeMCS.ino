#define RX2 16
#define TX2 17

void setup() {            //bing bong
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial2.begin(115200, SERIAL_8N1, RX2, TX2);
}

void loop() {
  Serial.println(Serial2.readString());
  delay(1000);
}
