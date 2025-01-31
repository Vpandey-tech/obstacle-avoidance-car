#include <NewPing.h>
#include <BluetoothSerial.h>

#define TRIGGER_PIN  25
#define ECHO_PIN     26
#define MAX_DISTANCE 10

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
BluetoothSerial SerialBT;

#define MOTOR_A1 27
#define MOTOR_A2 14
#define MOTOR_B1 12
#define MOTOR_B2 13

void setup() {
  SerialBT.begin("espvivek");
  pinMode(MOTOR_A1, OUTPUT);
  pinMode(MOTOR_A2, OUTPUT);
  pinMode(MOTOR_B1, OUTPUT);
  pinMode(MOTOR_B2, OUTPUT);
}

void loop() {
  if (SerialBT.available()) {
    char command = SerialBT.read();
    
    if ( command == 'U') {
      moveForward();
    } else if (command == 'D') {
      moveBackward();
    } else if (command == 'L') {
      turnLeft();
    } else if (command== 'R') {
      turnRight();
    } else {
      stopCar();
    }
  }


  

  int distance = sonar.ping_cm();
  if (distance > 0 && distance < 10) {
    // Obstacle detected, stop and avoid
    stopCar();
    delay(500);
    turnRight();
    delay(1000);
  }
}

void moveForward() {
  digitalWrite(MOTOR_A1, HIGH);
  digitalWrite(MOTOR_A2, LOW);
  digitalWrite(MOTOR_B1, LOW);
  digitalWrite(MOTOR_B2, HIGH);
}

void moveBackward() {
  digitalWrite(MOTOR_A1, LOW);
  digitalWrite(MOTOR_A2, HIGH);
  digitalWrite(MOTOR_B1, HIGH);
  digitalWrite(MOTOR_B2, LOW);
}

void turnLeft() {
  digitalWrite(MOTOR_A1, LOW);
  digitalWrite(MOTOR_A2, HIGH);
  digitalWrite(MOTOR_B1, LOW);
  digitalWrite(MOTOR_B2, HIGH);
}

void turnRight() {
  digitalWrite(MOTOR_A1, HIGH);
  digitalWrite(MOTOR_A2, LOW);
  digitalWrite(MOTOR_B1, HIGH);
  digitalWrite(MOTOR_B2, LOW);
}

void stopCar() {
  digitalWrite(MOTOR_A1, LOW);
  digitalWrite(MOTOR_A2, LOW);
  digitalWrite(MOTOR_B1, LOW);
  digitalWrite(MOTOR_B2, LOW);
}