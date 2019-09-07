#include <EEPROM.h>

#define EEPROM_SIZE 1
int address = 0;
byte val;

void setup() {
  Serial.begin(9600);
  EEPROM.begin(EEPROM_SIZE);
  
  val = EEPROM.read(address);
  EEPROM.write(address, ++val);
  EEPROM.commit();

}

void loop() {
  Serial.println(val);
  delay(1000);
}
