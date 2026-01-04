#include <WiFi.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

void setup() {
  Serial.begin(115200);

  // Connect to WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi!");

  // Create client INSIDE setup
  WiFiClient client;

  // HTTP GET request MUST be inside setup
  if (client.connect("worldtimeapi.org", 80)) {
    Serial.println("Connected to server!");

    client.println("GET /api/timezone/Asia/Kolkata HTTP/1.1");
    client.println("Host: worldtimeapi.org");
    client.println("Connection: close");
    client.println();
  }

  // Read response
  while (client.connected() || client.available()) {
    if (client.available()) {
      String line = client.readStringUntil('\n');
      Serial.println(line);
    }
  }

  client.stop();
}

void loop() {
  // empty
}
