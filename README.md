# arduino_D1_mini_eeprom

ESP8266 doesn't have EEPROM, so they use flash memory to emulate EEPROM.

The data is written to the non-volatile flash memory when you call EEPROM.commit

EEPROM.begin(EEPROM_SIZE);

EEPROM.commit();
