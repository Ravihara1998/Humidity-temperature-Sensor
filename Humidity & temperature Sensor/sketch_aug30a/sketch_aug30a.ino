#include <DFRobot_DHT11.h>
#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define dht_apin A0 
DFRobot_DHT11 DHT;

void setup() {
  
 lcd.begin(16, 2); 
 delay(500);
 lcd.setCursor(0,0);
 lcd.println("Welcome");
 delay(500);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.println("Humidity & temperature Sensor");
 delay(1000);
}


void loop() {
  delay(2000); 
  DHT.read(dht_apin);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.setCursor(12, 1);
  lcd.print( (char)223); 
  lcd.print("C");
}
