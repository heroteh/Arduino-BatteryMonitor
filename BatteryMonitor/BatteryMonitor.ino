#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 *display;
#define OLED_RESET -1

void setup() 
{
  Serial.begin(115200);
  while(!Serial); 
  Serial.println(" ");
  Serial.println("Starting up...");

  display = new Adafruit_SSD1306(OLED_RESET);
  display->begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);
}

void loop() 
{
  Serial.println("Running");
  display->ssd1306_command(SSD1306_DISPLAYON);
  display->clearDisplay();
  display->setTextSize(2);
  display->setTextColor(WHITE);
  display->setCursor(0,0);
  display->println("Hello world!");
  display->display();
  delay(30 * 1000);
}
