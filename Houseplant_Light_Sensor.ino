static unsigned char sunny[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 
  0x00, 0x80, 0x01, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0xE0, 0x07, 0x00, 
  0x00, 0xF0, 0x0F, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0xF0, 0xE3, 0xC7, 0x0F, 0xF0, 0xFB, 0xDF, 0x0F, 0xE0, 0xFD, 0xBF, 0x07, 
  0xE0, 0xFC, 0x3F, 0x07, 0xC0, 0x3E, 0x7C, 0x03, 0x40, 0x1E, 0x78, 0x02, 
  0x00, 0x1E, 0x78, 0x00, 0x00, 0x1E, 0x78, 0x00, 0x40, 0x1E, 0x78, 0x02, 
  0xC0, 0x3E, 0x7C, 0x03, 0xE0, 0xFC, 0x3F, 0x07, 0xE0, 0xFD, 0xBF, 0x07, 
  0xF0, 0xFB, 0xDF, 0x0F, 0xF0, 0xE3, 0xC7, 0x0F, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x30, 0x0C, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 
  0x00, 0xC0, 0x03, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

static const unsigned char cloudy[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xE0, 0x07, 0x00, 0x00, 0xF8, 0x1F, 0x00, 0x00, 0xFC, 0x3F, 0x00, 
  0x00, 0xFE, 0x7F, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x0F, 0xF0, 0x01, 
  0xF0, 0x07, 0xE0, 0x01, 0xF8, 0x07, 0xE0, 0x01, 0xFC, 0x03, 0xC0, 0x0F, 
  0x7E, 0x00, 0xC0, 0x1F, 0x3E, 0x00, 0xC0, 0x3F, 0x1E, 0x00, 0xC0, 0x7F, 
  0x1E, 0x00, 0x00, 0x7C, 0x1E, 0x00, 0x00, 0x78, 0x1E, 0x00, 0x00, 0x78, 
  0x3E, 0x00, 0x00, 0x7C, 0xFC, 0xFF, 0xFF, 0x7F, 0xFC, 0xFF, 0xFF, 0x3F, 
  0xF0, 0xFF, 0xFF, 0x1F, 0xE0, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

static const unsigned char partlycloudy[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 
  0xC0, 0x00, 0x0F, 0x00, 0xC0, 0x87, 0x0F, 0x00, 0xC0, 0x03, 0x1C, 0x00, 
  0xC0, 0xF9, 0x19, 0x00, 0x40, 0xFE, 0x07, 0x00, 0x00, 0xFF, 0x0F, 0x00, 
  0x80, 0xFF, 0x1F, 0x00, 0x80, 0x0F, 0x9F, 0x00, 0xC0, 0x07, 0xBE, 0x03, 
  0xD8, 0x03, 0xBC, 0x07, 0xDC, 0xF3, 0xBF, 0x07, 0xDE, 0xFB, 0xBF, 0x03, 
  0xDE, 0xFF, 0xBF, 0x01, 0xDC, 0xFF, 0x7F, 0x00, 0x90, 0x1F, 0xF8, 0x00, 
  0xC0, 0x0F, 0xF0, 0x00, 0xF0, 0x0F, 0xF0, 0x00, 0xF8, 0x07, 0xE0, 0x00, 
  0xF8, 0x07, 0xE0, 0x0F, 0x7C, 0x00, 0xE0, 0x1F, 0x3C, 0x00, 0xE0, 0x3F, 
  0x3C, 0x00, 0x00, 0x3E, 0x7C, 0x00, 0x00, 0x3C, 0xF8, 0xFF, 0xFF, 0x3F, 
  0xF8, 0xFF, 0xFF, 0x1F, 0xF0, 0xFF, 0xFF, 0x1F, 0xC0, 0xFF, 0xFF, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

#include "Adafruit_VEML7700.h"
#include "FS.h"
#include "SD.h"
#include "SPI.h"

#include "weather.h"

#include <Wire.h>

#include <GxEPD.h>
#include <GxDEPG0290BS/GxDEPG0290BS.h>  // 2.9" b/w Waveshare variant, TTGO T5 V2.4.1 2.9"
#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>
#include <Fonts/FreeMonoBold24pt7b.h>

// setup the e paper display
// Busy > D4
// RST > D21
// DC > D22
// CS > D5
// CLK > D18
// DIN > D23

SPIClass displaySPI(VSPI);
GxIO_Class io(displaySPI, 5, 22, 21);
GxEPD_Class display(io, 21, 4);

SPIClass sdSPI(HSPI);

#define SD_MOSI 13
#define SD_MISO 12
#define SD_SCLK 14
#define SD_CS 15

// Create the Lux sensor
Adafruit_VEML7700 veml = Adafruit_VEML7700();

// define for sdcard
File myFile;

// variables for inturrupts
volatile bool pressed = false;
unsigned long lastPressTime = 0;          // To store the last time the button was pressed
const unsigned long debounceDelay = 500;  // 50 milliseconds debounce time

// function for inturrupts
void IRAM_ATTR p() {
  // Check if enough time has passed since the last press
  if (millis() - lastPressTime > debounceDelay) {
    pressed = true;
    lastPressTime = millis();  // Update last press time
  }
}

int counter = 1;
RTC_DATA_ATTR int day = 3;
RTC_DATA_ATTR double two_day_average = 0;
RTC_DATA_ATTR double hours_expo = 0;


void setup() {
  Serial.begin(115200);
  Serial.println(day);
  // start the eink display
  display.init();
  display.setRotation(1);
  display.fillScreen(GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setCursor(10, 10);
  display.println("Setting up");
  display.update();

  // for ejecting
  pinMode(25, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(25), p, FALLING);

  // VEML setup
  Wire.begin(33, 32);  // SDA = 33, SCL = 32
  if (veml.begin()) {
    Serial.println("Found a VEML7700 sensor");
  } else {
    Serial.println("No sensor found ... check your wiring?");
  }
  veml.setIntegrationTime(800);

  // setup sdcard
  SPI.begin(SD_SCLK, SD_MISO, SD_MOSI, SD_CS);
  if (!SD.begin(SD_CS)) {
    Serial.println("SD Card MOUNT FAIL");
  } else {
    Serial.println("SD Card MOUNT SUCCESS");
  }

  two_day_average = get_average_of_last2_days(day);
  hours_expo = hours_exposed(day);
  // Open the file in append mode once during setup
  myFile = SD.open("/Sensor_Data" + String(day) + ".txt", FILE_WRITE);
  if (myFile) {
    Serial.println("File opened for writing.");
  } else {
    Serial.println("Failed to open file.");
  }
  
}
unsigned long previousMillisRead = 0;    // Last time sensor data was read
unsigned long previousMillisDisplay = 0; // Last time display was updated
unsigned long intervalRead = 10000;       // Interval to read data (in ms, e.g., 1 second)
unsigned long intervalDisplay = 30000;  

void loop() {
  unsigned long currentMillis = millis();
  float val = veml.readLux();  // Read lux value
  if (currentMillis - previousMillisRead >= intervalRead) {
    // Save the last time you performed an action
    previousMillisRead = currentMillis;
    if (pressed) {
      myFile.close();
      // Simulate loop termination by entering an infinite loop
      // The loop below will terminate the regular loop when the button is pressed
      while (true) {
        display.fillScreen(GxEPD_WHITE);
        display.setCursor(10, 10);
        display.println("stopped");
        display.update();
        delay(1000000);
      }
    }else {
      check_sleep(val);            // check if the system should go to sleep
      Write_File(val);             // Write to the file
    }
  }
  if (currentMillis - previousMillisDisplay >= intervalDisplay) {
    // Save the last time you performed an action
    previousMillisDisplay = currentMillis;
    display.fillScreen(GxEPD_WHITE);
    display.setCursor(30, 0);
    display.print("Currently: ");
    
    display_icon(val, 30, 10);

    display.setCursor(30, 45);
    display.print("Weather of last 2 days");

    display_icon(two_day_average, 30, 50);

    display.setCursor(30, 80);
    display.print("Average sunlight exposure: ");
    display.print(hours_expo);
    display.print(" Hrs");

    display.update();

    myFile.print(counter);
    myFile.print(", ");
    myFile.println(val);  // Append the value to the file
  }
}

void Write_File(float val) {
  if (myFile) {
    Serial.print("Data written to file, Count: ");
    Serial.println(counter);
    counter++;
  } else {
    Serial.println("Failed to write to file, file not open.");
  }
}

// check if we need to sleep, if we do, closes the file and goes into deep sleep
// displays if sleeping or not
void check_sleep(float val) {
  if (val < 10) {
    myFile.close();
    Sleeping();  
  }
}

// sleeps and checks in intervals of 30 mins (subject to change)
void Sleeping() {
  int times = 0;
  while (veml.readLux() < 10) {
    // only refresh the display when required
    if (times == 0) {
      display.fillScreen(GxEPD_WHITE);
      display.setCursor(80, 80);
      display.println("Sleeping.. ZZZ");
      display.update();
      times++;
    }
    // go into deep sleep to save power
    esp_sleep_enable_timer_wakeup(100000 * 100);
    esp_light_sleep_start();
    Serial.println(veml.readLux());
  }
  Serial.println("no more sleeping");
  day++;
  Serial.println(day);
  counter = 0;

  SPI.begin(SD_SCLK, SD_MISO, SD_MOSI, SD_CS);
  if (!SD.begin(SD_CS)) {
    Serial.println("SD Card MOUNT FAIL");
  } else {
    Serial.println("SD Card MOUNT SUCCESS");
  }

  myFile = SD.open("/Sensor_Data" + String(day) + ".txt", FILE_WRITE);
  two_day_average = get_average_of_last2_days(day);
  hours_expo = hours_exposed(day);
}

double calc_avg(String line) {
  int comma = line.indexOf(',');
  String val = line.substring(comma + 1);
  double floatValue = val.toDouble();
  //Serial.println(floatValue);
  return floatValue;
}

double hours_exposed(int day){
  double avg = 0;
  int counter = 0;
  double avg1 = 0;
  double avg2 = 0;
  // get the average of the first file, current day -1
  if (day <= 1) {
    return 0;
  }
  myFile = SD.open("/Sensor_Data" + String(day - 1) + ".txt", FILE_READ);
  while (myFile.available()) {
    String line = myFile.readStringUntil('\n');  // Read until newline
    if(calc_avg(line) > 2000) {
      counter++;
    }
  }
  myFile.close();
  Serial.println(counter);
  avg1 = (counter * 10) /*seconds*/ / 3600 /*hours*/;
  Serial.println(avg1);
  counter = 0;
  Serial.println(counter);
  // average of today - 2
  myFile = SD.open("/Sensor_Data" + String(day - 2) + ".txt", FILE_READ);
  while (myFile.available()) {
    String line = myFile.readStringUntil('\n');  // Read until newline
    if(calc_avg(line) > 2000) {
      counter++;
    }
  }
  myFile.close();
  avg2 = (counter * 10) /*seconds*/ / 3600 /*hours*/;
  Serial.println(avg2);
  Serial.println(counter);
  return (avg1 + avg2)/2;
}

double get_average_of_last2_days(int day) {
  double avg = 0;
  int counter = 0;
  // get the average of the first file, current day -1
  if (day < 1) {
    return 0;
  }
  myFile = SD.open("/Sensor_Data" + String(day - 1) + ".txt", FILE_READ);
  while (myFile.available()) {
    counter++;
    String line = myFile.readStringUntil('\n');  // Read until newline
    avg += calc_avg(line);                       // parse the line
  }
  myFile.close();
  double avg1 = avg / counter;
  counter = 0;
  avg = 0;

  // average of today - 2
  myFile = SD.open("/Sensor_Data" + String(day - 2) + ".txt", FILE_READ);
  while (myFile.available()) {
    counter++;
    String line = myFile.readStringUntil('\n');  // Read until newline
    avg += calc_avg(line);                       // parse the line
  }
  myFile.close();
  double avg2 = avg / counter;
  double total_avg = (avg1 + avg2) / 2;
  return total_avg;
}

void display_icon(double avg, int x, int y) {
  if (avg > 20000) {  // sunny
    display.drawXBitmap(x, y, sunny, 32, 32, GxEPD_BLACK);
  } else if (avg > 3000 && avg < 20000) {  // partial sun
    display.drawXBitmap(x, y, partlycloudy, 32, 32, GxEPD_BLACK);
  } else {  // cloudy
    display.drawXBitmap(x, y, cloudy, 32, 32, GxEPD_BLACK);
  }
}
