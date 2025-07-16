#include <Servo.h>

Servo servo1, servo2, servo3, servo4;

unsigned long startTime;
bool sweeping = true;
bool sweepStarted = false;

void setup() {
  servo1.attach(2);
  servo2.attach(4);
  servo3.attach(7);
  servo4.attach(8);
}

void loop() {
  if (sweeping) {
    if (!sweepStarted) {
      startTime = millis();
      sweepStarted = true;
    }

    if (millis() - startTime <= 2000) {
      for (int pos = 0; pos <= 180; pos += 1) {
        moveAll(pos);
        delay(10);
      }
      for (int pos = 180; pos >= 0; pos -= 1) {
        moveAll(pos);
        delay(10);
      }
    } else {
      moveAll(90);
      sweeping = false;
    }
  }
}

void moveAll(int angle) {
  servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);
}
