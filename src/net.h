#ifndef TERRARIUM_NET
#define TERRARIUM_NET

#include <SPI.h>
#include <WiFi.h>
#include "display.h"
// #include "status.h"

namespace Net
{
     bool isConnected();
     std::string setupAP();
     void connect(bool interactive);
     char *statusToString(int code);

     const char INDEX_HTML[] =
         "<!DOCTYPE HTML>"
         "<html>"
         "<head>"
         "<meta content=\"text/html; charset=ISO-8859-1\""
         " http-equiv=\"content-type\">"
         "<meta name = \"viewport\" content = \"width = device-width, initial-scale = 1.0, maximum-scale = 1.0, user-scalable=0\">"
         "<title>ESP8266 Web Form Demo</title>"
         "<style>"
         "\"body { background-color: #808080; font-family: Arial, Helvetica, Sans-Serif; Color: #000000; text-align:center;}\""
         "</style>"
         "</head>"
         "<body>"
         "<h3>Enter your WiFi credentials</h3>"
         "<form action=\"/\" method=\"post\">"
         "<p>"
         "<label>SSID:&nbsp;</label>"
         "<input maxlength=\"30\" name=\"ssid\"><br>"
         "<label>Key:&nbsp;&nbsp;&nbsp;&nbsp;</label><input maxlength=\"30\" name=\"password\"><br>"
         "<input type=\"submit\" value=\"Save\">"
         "</p>"
         "</form>"
         "</body>"
         "</html>";
}

#endif