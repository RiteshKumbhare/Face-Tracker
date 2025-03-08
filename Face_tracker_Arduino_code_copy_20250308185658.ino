#include <Servo.h>

Servo servoX;  // Servo for X-axis
Servo servoY;  // Servo for Y-axis

void setup() {
  Serial.begin(9600);
  servoX.attach(10);  // Connect X-axis servo to pin 10
  servoY.attach(9);   // Connect Y-axis servo to pin 9
  
  // Set initial servo positions
  servoX.write(90);
  servoY.write(90);
}

void loop() {
  if (Serial.available() > 0) {
    // Read incoming control signals
    String input = Serial.readStringUntil('\n');
    
    // Parse the control signals for X and Y axes
    int xIndex = input.indexOf('X');
    int yIndex = input.indexOf('Y');
    if (xIndex != -1 && yIndex != -1) {
      float controlX = input.substring(xIndex + 1, yIndex).toFloat();
      float controlY = input.substring(yIndex + 1).toFloat();
      
      // Map control signals to servo positions (0 to 180 degrees)
      int posX = constrain(map(controlX, -100, 100, 0, 180), 0, 180);
      int posY = constrain(map(controlY, -100, 100, 0, 180), 0, 180);
      
      // Move servos
      servoX.write(posX);
      servoY.write(posY);
      
      // Print control signals
      Serial.print("ControlX: ");
      Serial.println(controlX);
      Serial.print("ControlY: ");
      Serial.println(controlY);
    }
  }
}