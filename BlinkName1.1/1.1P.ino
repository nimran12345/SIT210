void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print(".");             
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print("-");             
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void letterSpace() {
  Serial.print(" ");             
  delay(800);c:\Users\nimra\OneDrive\Documents
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);            
  delay(2000);                   
  Serial.println("Blinking name: NIMRAN in Morse Code");
}

void loop() {
  // N = -.
  dash(); dot();
  letterSpace();

  // I = ..
  dot(); dot();
  letterSpace();

  // M = --
  dash(); dash();
  letterSpace();

  // R = .-.
  dot(); dash(); dot();
  letterSpace();

  // A = .-
  dot(); dash();
  letterSpace();

  // N = -.
  dash(); dot();
  letterSpace();

  Serial.println();             
  delay(3000);                  
}

