const char* ssid = "REPLACE_WITH_YOUR_SSID";
const char* password = "REPLACE_WITH_YOUR_PASSWORD";
WiFiServer server(80);
String header;
String output26State = "off";
String output27State = "off";
const int output26 = 26;
const int output27 = 27;
unsigned long currentTime = millis();
unsigned long previousTime = 0; 
const long timeoutTime = 2000;
  // Initialize the output variables as outputs
  pinMode(output26, OUTPUT);
  pinMode(output27, OUTPUT);
  // Set outputs to LOW
  digitalWrite(output26, LOW);
  digitalWrite(output27, LOW);
