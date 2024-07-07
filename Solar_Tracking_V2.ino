// Define the pins for the LDR sensors
const int ldrTop = A0;
const int ldrBottom = A1;
const int ldrLeft = A2;
const int ldrRight = A3;

// Define the pins for the IBT-2 motor drivers
const int motor1LPWM = 6;  // Connect to LPWM for motor 1
const int motor1RPWM = 5;  // Connect to RPWM for motor 1
const int motor2LPWM = 10; // Connect to LPWM for motor 2
const int motor2RPWM = 9; // Connect to RPWM for motor 2

// Threshold to have some leverage over the values
const int threshold = 10;
// Light threshold to detect direct sunlight whether it is day or night
const int lightThreshold = 500; 

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set the motor driver pins as outputs
  pinMode(motor1LPWM, OUTPUT);
  pinMode(motor1RPWM, OUTPUT);
  pinMode(motor2LPWM, OUTPUT);
  pinMode(motor2RPWM, OUTPUT);
}

void loop() {
  // Read the LDR sensor values
  int valTop = analogRead(ldrTop);
  int valBottom = analogRead(ldrBottom);
  int valLeft = analogRead(ldrLeft);
  int valRight = analogRead(ldrRight);

  // Debugging output
  Serial.print("Top: ");
  Serial.print(valTop);
  Serial.print(" | Bottom: ");
  Serial.print(valBottom);
  Serial.print(" | Left: ");
  Serial.print(valLeft);
  Serial.print(" | Right: ");
  Serial.println(valRight);

  // Check if all LDRs are below the light threshold
  bool lowLight = (valTop < lightThreshold) && (valBottom < lightThreshold) &&
                  (valLeft < lightThreshold) && (valRight < lightThreshold);

  if (lowLight) {

    // Vertical movement
    if (abs(valTop - valBottom) > threshold) {
      if (valTop < valBottom) {
        moveMotor1Forward();
      } else {
        moveMotor1Backward();
      }
    } else {
      stopMotor1();
    }

    // Horizontal movement
    if (abs(valLeft - valRight) > threshold) {
      if (valLeft < valRight) {
        moveMotor2Forward();
      } else {
        moveMotor2Backward();
      }
    } else {
      stopMotor2();
    }
  } else {
    stopMotor1();
    stopMotor2();
  }

  // Small delay to prevent overloading the serial output
  delay(500);
}

// Function to move linear actuator forward
void moveMotor1Forward() {
  analogWrite(motor1LPWM, 255); // Full speed forward
  analogWrite(motor1RPWM, 0);   // Stop backward movement
}

// Function to move linear actuator backward
void moveMotor1Backward() {
  analogWrite(motor1LPWM, 0);   // Stop forward movement
  analogWrite(motor1RPWM, 255); // Full speed backward
}

// Function to stop the actuator
void stopMotor1() {
  analogWrite(motor1LPWM, 0); // Stop the motor
  analogWrite(motor1RPWM, 0); // Stop the motor
}

// Function to move linear actuator forward
void moveMotor2Forward() {
  analogWrite(motor2LPWM, 255); // Full speed forward
  analogWrite(motor2RPWM, 0);   // Stop backward movement
}

// Function to move linear actuator backward
void moveMotor2Backward() {
  analogWrite(motor2LPWM, 0);   // Stop forward movement
  analogWrite(motor2RPWM, 255); // Full speed backward
}

// Function to stop the actuator
void stopMotor2() {
  analogWrite(motor2LPWM, 0); // Stop the motor
  analogWrite(motor2RPWM, 0); // Stop the motor
}
