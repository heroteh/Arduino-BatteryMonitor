#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display;

void setup() 
{
  Serial.begin(115200);
  while(!Serial); 
  Serial.println(" ");
  Serial.println("Starting up...");
}

void loop() 
{
  Serial.println("Running");
  delay(30 * 1000);
}
