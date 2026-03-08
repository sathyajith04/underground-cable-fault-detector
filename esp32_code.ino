#include <LiquidCrystal.h>

// Define pins for Arduino UNO (mapped to ESP32 labels in Proteus)
#define D9 9    // GPIO 3  (LCD RS)
#define D8 8    // GPIO 15 (LCD E)
#define D7 7    // GPIO 13 (LCD D4)
#define D6 6    // GPIO 12 (LCD D5)
#define D5 5    // GPIO 14 (LCD D6)
#define D4 4    // GPIO 2  (LCD D7)
#define D3 3    // GPIO 0  (Relay 1)
#define D2 2    // GPIO 4  (Relay 2)
#define D1 1    // GPIO 17 (Relay 3)
#define sensor A0  // GPIO 36 (Analog input)

// Initialize LCD (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(D9, D8, D7, D6, D5, D4);

// Pin definitions for relays
#define relay1 D3    // Relay for R phase
#define relay2 D2    // Relay for Y phase
#define relay3 D1    // Relay for B phase

Int read_ADC;
Int distance;

Void setup() {
  pinMode(sensor, INPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);

  lcd.begin(16, 2);
  lcd.print(“Cable Fault”);
  lcd.setCursor(0, 1);
  lcd.print(“Detector”);
  delay(2000);
  lcd.clear();
}

Void loop() {
  Lcd.setCursor(1, 0);
  Lcd.print(“R”);
  Lcd.setCursor(7, 0);
  Lcd.print(“Y”);
  Lcd.setCursor(13, 0);
  Lcd.print(“B”);

  // Check R phase
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  delay(500);
  readFault();
  lcd.setCursor(0, 1);
  displayFault(distance, “R”);

  // Check Y phase
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, LOW);
  delay(500);
  readFault();
  lcd.setCursor(6, 1);
  displayFault(distance, “Y”);

  // Check B phase
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, HIGH);
  delay(500);
  readFault();
  lcd.setCursor(12, 1);
  displayFault(distance, “B”);
}

Void readFault() {
  Read_ADC = analogRead(sensor);
  Distance = read_ADC / 100; // Simplified distance calculation
  If (distance > 9) distance = 0; // No fault if reading is too high
}

Void displayFault(int dist, String phase) {
  If (dist > 0) {
    Lcd.print(dist);
    Lcd.print(“KM”);
  } else {
    Lcd.print(“NF “); // No Fault
  }
}

