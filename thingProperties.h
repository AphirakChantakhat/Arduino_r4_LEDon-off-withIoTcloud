#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;
const char PASS[]     = SECRET_OPTIONAL_PASS;

void onLEDChange();

bool lED;

void initProperties(){

  ArduinoCloud.addProperty(lED, READWRITE, ON_CHANGE, onLEDChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);