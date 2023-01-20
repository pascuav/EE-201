void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
}

void loop() {  

  if (digitalRead(7) == 1) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }
}

