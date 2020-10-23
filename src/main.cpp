// Code that doesn't work for Unit CS-E9CKP remote A75C2295
#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <ir_Panasonic.h>

const uint16_t kIrLed = 3;
IRPanasonicAc ac(kIrLed);

void setup() {
  // put your setup code here, to run once:
  ac.begin();
  delay(200);
  ac.setModel(kPanasonicCkp);
  ac.on();
  ac.setFan(kPanasonicAcFanAuto);
  ac.setMode(kPanasonicAcCool);
  ac.setTemp(24);
  ac.setSwingVertical(kPanasonicAcSwingVAuto);
  ac.setSwingHorizontal(kPanasonicAcSwingHAuto);
}

void loop() {
  // put your main code here, to run repeatedly:
  ac.send();
  delay(5000);
}