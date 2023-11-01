#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,5,4,3,2);

void setup() {
  
  lcd.begin(16,2);
}

void loop() {

  lcd.setCursor(3,0);
  lcd.print("Arduino Uno");
  delay(500);
  lcd.setCursor(3,1);
  delay(500);
  lcd.clear();
  delay(500);
  
}
