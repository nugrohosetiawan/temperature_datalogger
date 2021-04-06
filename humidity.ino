#include<dht.h>
dht DHT;

// if you require to change the pin number, Edit the pin with your arduino pin.

#define DHT11_PIN 3

void setup() {

Serial.begin(9600);

Serial.println("Humidity and temperature Detector"); }

void loop() { // READ DATA

int chk = DHT.read11(DHT11_PIN);


Serial.println(DHT.temperature, 1);

delay(60000);

}
