#include "thingProperties.h"
#define LEDpin 13

void setup() {
  Serial.begin(9600);
  delay(1500); 
  initProperties();
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  

  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  if(lED == 1){
    digitalWrite(LEDpin, HIGH);
  }else{
    digitalWrite(LEDpin, LOW);
  }
  
}