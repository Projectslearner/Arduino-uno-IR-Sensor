// Define the pin where the IR sensor is connected
const int irSensorPin = 7;

void setup() {
  // Initialize the digital pin as an input
  pinMode(irSensorPin, INPUT);
  // Start the serial communication to display messages
  Serial.begin(9600);
}

void loop() {
  // Read the value from the sensor
  int sensorValue = digitalRead(irSensorPin);

  // Check if an object is detected or not
  if (sensorValue == HIGH) {
    Serial.println("Object detected");
  } else {
    Serial.println("No object detected");
  }

  // Wait for a short period before repeating the loop
  delay(500); // Delay in milliseconds
}
