#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <OTA.cpp>
#include <FileSysWeb.cpp>

void setup() 
{
  Serial.begin(115200);
  WebBegin();
  OTA_begin();
}

void loop() 
{
  ArduinoOTA.handle();
  server.handleClient();
}