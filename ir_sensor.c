/*
    Project name : Arduino Uno IR Infrared Sensor
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-ir-infrared-sensor
*/

// Define the pin connected to the IR infrared sensor module
const int IR_SENSOR_PIN = A0; // Analog pin connected to the sensor

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Initialize the IR sensor pin as input
  pinMode(IR_SENSOR_PIN, INPUT);
}

void loop() {
  // Read the analog value from the IR infrared sensor
  int sensorValue = analogRead(IR_SENSOR_PIN);

  // Print the sensor value to Serial Monitor
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  // Determine object presence based on sensor value threshold
  if (sensorValue > 500) { // Adjust threshold based on your sensor and environment
    Serial.println("Object detected!");
  } else {
    Serial.println("No object detected.");
  }

  delay(1000); // Delay for 1 second before next reading
}
