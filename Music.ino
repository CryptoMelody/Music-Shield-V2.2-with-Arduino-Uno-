
#include <SD.h>
#include <SPI.h>
#include <arduino.h>
#include <MusicPlayer.h>

void setup() {
    Serial.begin(9600);
    player.begin(); //will initialize the hardware and set default mode to be normal.
    player.setPlayMode(PM_NORMAL_PLAY); //set mode to play shuffle
    player.scanAndPlayAll(); //If the current playlist is empty,it will add all the songs in the root directory to the playlist.
}
void loop() {
    player.play();
}

