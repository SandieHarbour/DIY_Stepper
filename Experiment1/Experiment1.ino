

// ESP8266 Pins to GPIO numbers
#define D0  16 // HIGH at boot, used to wake up from deep sleep
#define D1   5
#define D2   4
#define D3   0 // Connected to FLASH button, boot fails if pulled LOW
#define D4   2 // HIGH at boot, boot fails if pulled LOW
#define D5  14
#define D6  12
#define D7  13
#define D8  15 // Required for boot, boot fails if pulled HIGH

#define A1   5
#define A2   4
#define B1   0 // Connected to FLASH button, boot fails if pulled LOW
#define B2   2 // HIGH at boot, boot fails if pulled LOW


void setup() {
  // put your setup code here, to run once:
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(B2, OUTPUT);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(B1, LOW);
  digitalWrite(B2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  digitalWrite(B1, LOW);
  digitalWrite(B2, LOW);
  delay(250);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(B2, LOW);
  delay(250);
  digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
  digitalWrite(B1, LOW);
  digitalWrite(B2, LOW);
  delay(250);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(B1, LOW);
  digitalWrite(B2, HIGH);
  delay(250);
}
