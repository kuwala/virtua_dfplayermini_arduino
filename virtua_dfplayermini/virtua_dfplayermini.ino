#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
// This will play a file from the mp3 player
// make an mp3 folder on the root of the sd card and place your mp3s there.
// the file must be named 0001.mp3

// #define RX_MP3_TX_MICRO_PIN 11
#define RX_MP3_TX_MICRO_PIN A1
// #define TX_MP3_RX_MICRO_PIN 10
#define TX_MP3_RX_MICRO_PIN A0
#define POT_PIN A0
SoftwareSerial sSerial(TX_MP3_RX_MICRO_PIN, RX_MP3_TX_MICRO_PIN);
int potValue = 0;
unsigned long timer = 0;


DFRobotDFPlayerMini player;

void setup() {
  pinMode(POT_PIN, INPUT);
  Serial.begin(9600);
  sSerial.begin(9600);
  if (player.begin(sSerial)) {
    Serial.print("mp3 software serial started");

    player.volume(20);
    player.play(1);
  } else {
    Serial.print("Connecting to player failed");
  }

  timer = millis();
  player.play(1);
}

void loop() {
  //potValue = analogRead(POT_PIN);
  delay(1);

  // only check the potentiometer every 1 second
  // if(millis() - timer > 1000) {
  //   if (potValue > 500) {
  //     player.play(1);
  //   } else {
  //     player.play(2);
  //   }
  //   timer = millis();
  // }

}
