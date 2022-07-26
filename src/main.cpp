/******************************
 *  AUTEUR : Tanguy ROUDAUT   *
 *  PROJET: BonsaiDuino       *
 *  DATE : Sam. 26 dec.       *
 ******************************/

/*⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠓⣯⣶⡀⠉⠶⠛⠳⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⢢⡴⣷⣾⣿⣿⣿⣿⣿⣿⣿⣿⣾⠦⠤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡵⢲⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣮⣒⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡖⠙⣒⣤⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡛⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣿⣿⣿⠀⠁⢤⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⡿⠛⣿⣿⡟⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠊⠒⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢤⢙⡟⣿⣿⣿⣿⠿⠋⢯⠛⡛⠔⠀⢈⠉⠀⠉⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣄⡀⠀⠀⠀⠉⠒⠚⠀⠉⠀⠀⠀⠀⠀⠐⣶⣤⣶⣶⠿⠛⠛⢿⣿⣿⣿⣿⣿⢃⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣖⠖⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⡤⢶⣿⣿⣾⣥⣄⠒⡄⠀⠀⠀⣀⣖⣬⣽⣶⣿⠏⠒⠉⠀⠀⠀⠀⠀⠀⠀⠛⣿⣿⣿⣆⢢⣴⠄⠈⠒⠉⢛⠿⣿⣿⣿⣿⣿⣬⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣷⣎⣁⣽⣾⡿⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⣿⣿⣦⣀⠀⠀⠀⠀⠀⠀⠀⠙⡉⣁⠤⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠚⠁⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⡆⣄⡤⠦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⣿⣿⣿⣿⣿⣕⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⡿⣭⣶⣿⣿⣿⣿⣾⣉⠄⠀⠀⢠⣒⣽⣶⣶⣶⣤⡉⠒⢄⠀⠹⣿⣿⣿⣿⣿⠙⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⠽⢻⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⠟⡦⣠⣡⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠿⠙⣿⠉⠘⣿⣿⣿⣿⣿⣿⣿⣿⢹⠀⠹⢲⣷⠁⡞⣿⣿⣿⣿⣿⣿⢿⡿⠛⠙⠛⣿⣿⣿⣿⣿⣿⣛⠴⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠢⠛⠉⢻⢿⠟⠃⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⢫⠉⠀⠀⠀⠀⠀⠀⠀⠉⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢮⣿⣿⣿⣿⡳⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠺⠻⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⣿⣦⠀⢃⣿⣿⣿⣿⣿⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣠⣦⣦⣿⣶⣶⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣿⣤⣔⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⢿⠿⡿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⣿⣿⣿⢇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠂⠀⠤⠍⢉⣉⣛⠛⠿⠿⠿⢿⣿⣿⣿⡿⠿⠿⠿⠿⠿⠿⠿⠿⣿⣿⣿⡿⠿⠿⠛⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/


#include <Arduino.h>
#include <avr/sleep.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_I2CDevice.h>
#include <Adafruit_GFX.h>
#include "Adafruit_NeoPixel.h"
#include "Adafruit_SSD1306.h"

#define interruptPin 2 // Pour l'arduino UNO, NANO, MINI

#define NUMPIXELS   24
#define LedPin      8
Adafruit_NeoPixel pixels(NUMPIXELS, LedPin, NEO_GRB + NEO_KHZ800);

#define OLED_RESET 4
const unsigned char myBitmap [] PROGMEM = {
	// '5aec35946554160a79be9fbf 22, 31x32px
	0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xfc, 0x1f, 0xfe, 0xff, 0xf0, 0x0f, 0xfe, 
	0xff, 0xe0, 0x03, 0xfe, 0xff, 0x80, 0x03, 0xfe, 0xff, 0x00, 0x00, 0x7e, 0xfe, 0x00, 0x30, 0x1e, 
	0xfe, 0x17, 0xb0, 0x1e, 0xff, 0xff, 0xc0, 0x06, 0xff, 0xff, 0xe3, 0xc2, 0xff, 0xff, 0xf3, 0xe2, 
	0xf1, 0xdf, 0xfb, 0xfe, 0xe0, 0x9f, 0xfd, 0xfe, 0xe0, 0x1f, 0xfe, 0x7e, 0x80, 0x67, 0xfe, 0x3e, 
	0x80, 0x03, 0x86, 0x3e, 0xf0, 0x1f, 0x00, 0x7e, 0xfc, 0x1e, 0x3c, 0xfe, 0xff, 0xfe, 0x7f, 0xfe, 
	0xff, 0xfc, 0x7f, 0xfe, 0xff, 0xfe, 0x7f, 0xfe, 0xff, 0xff, 0x7f, 0xfe, 0xff, 0xff, 0x9f, 0xfe, 
	0xff, 0xff, 0x9f, 0xfe, 0xff, 0xc0, 0x0f, 0xfe, 0x80, 0x00, 0x00, 0x3e, 0x80, 0x08, 0x00, 0x1e, 
	0x80, 0x00, 0x00, 0x3e, 0xc0, 0x00, 0x00, 0x7e, 0xfc, 0x00, 0x00, 0x7e, 0xff, 0xff, 0xff, 0xfe
};
Adafruit_SSD1306 oled(OLED_RESET);

#define MoisturePin A0
const int AirValue = 902;
const int WaterValue = 760;
int soilMoistureValue = 0;
int soilmoisturepercent = 0;

void wakeUp();
void GoSleep();
int nbrLed();
void measureMoisture ();
void oledMoisture();
void LedMoisture();


void setup()
{
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(interruptPin, INPUT);

  pixels.begin();

  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.clearDisplay();
  oled.drawBitmap(0,0,myBitmap,31, 32, BLACK, WHITE);
  oled.setTextSize(2);
  oled.setTextColor(WHITE);
  oled.setCursor(40,2);
  oled.println("Bonsai");
  oled.setCursor(40,18);
  oled.println("Duino");
  oled.display();

  for (int i=0; i<2; i++){
    for (int a=0; a<= 50; a++){
      pixels.setBrightness(a);
      for (int b=0; b<= NUMPIXELS; b++){
        pixels.setPixelColor(b, 255, 228, 175);
        pixels.show();
      }
      delay(20);
    } 
    for (int c=50; c>=0; c--){
      pixels.setBrightness(c);
      for (int d=0; d<= NUMPIXELS; d++){
        pixels.setPixelColor(d, 255, 228, 175);
        pixels.show();
      }
      delay(20);
    }
  }
  pixels.setBrightness(10);
}

void loop()
{
  measureMoisture();
  oledMoisture();
  LedMoisture();
  delay(15000);
  GoSleep();
}

int nbrLed()
{
  int resultat = 0;

  return resultat = ((soilmoisturepercent * 24) / 100)-1; // la vrais
}

void measureMoisture (){
  soilMoistureValue = analogRead(MoisturePin);

  Serial.println("\n\nValeur analogique mesuré: ");
  Serial.println(soilMoistureValue);
  Serial.println("\n");

  soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);
  Serial.println("\nValeur mesuré en %: ");
  Serial.println(soilmoisturepercent);
  Serial.println("\n");
}

void LedMoisture(){
  pixels.clear();

  for (int i = 0; i <= nbrLed(); i++){
    pixels.setPixelColor(i, 0, 139, 255);
    pixels.show();
  }
}

void oledMoisture(){
  pixels.clear();
  oled.clearDisplay();
  oled.setTextSize(1);
  oled.setTextColor(WHITE);

  Serial.println("Taux humidité: ");
  oled.setCursor(0,0);
  oled.println("1) Humidite : ");
  if (soilmoisturepercent >= 100){
    oled.setCursor(85,0);
    oled.println("100");
    oled.setCursor(110,0);
    oled.println("%");  
    Serial.println("100 % \n\n");
  }
  else if (soilmoisturepercent <= 0){
    oled.setCursor(85,0);
    oled.println("0");
    oled.setCursor(110,0);
    oled.println("%");  
    Serial.println("0 %\n\n");
  }
  else if (soilmoisturepercent > 0 && soilmoisturepercent < 100){
    oled.setCursor(85,0);
    oled.println(soilmoisturepercent);
    oled.setCursor(110,0);
    oled.println("%");
    Serial.print(soilmoisturepercent);
    Serial.println("%\n\n");
  }
  oled.setCursor(0,10);
  oled.println("2) Humidite :");
  oled.setCursor(85,10);
  oled.println("N.P.");  
  //oled.setCursor(110,10);
  //oled.println("%");  
  oled.setCursor(0,20);
  oled.println("3) Humidite :");
  oled.setCursor(85,20);
  oled.println("N.P.");  
  //oled.setCursor(110,20);
  //oled.println("%");  
  oled.display();
}

void wakeUp(){
  sleep_disable();
  detachInterrupt(0);
}

void GoSleep(){
  sleep_enable();
  attachInterrupt(0, wakeUp, HIGH);
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  Serial.println("MODE VEILLE");
  oled.clearDisplay();
  oled.display();
  digitalWrite(LED_BUILTIN, LOW);
  for (unsigned int i=0; i<=NUMPIXELS; i++){
      pixels.clear();
      pixels.setPixelColor(i, 0, 0, 0);
      pixels.show();
      delay(250);
  }
  sleep_cpu();
  Serial.println("MODE ACTIF");
  digitalWrite(LED_BUILTIN, HIGH);
}