# four-servo-motors-using-Arduino


## Project Overview
This project demonstrates controlling four servo motors using Arduino to simulate a walking motion for a humanoid robot.  
The code includes a simple sweep movement for 2 seconds, then holds all servos at 90 degrees.  
Additionally, a step-by-step walking algorithm is provided to explain how the humanoid robot would perform walking movements.

## Hardware Setup
- Arduino board (e.g., Arduino Uno)  
- 4 Servo motors connected to pins 2, 4, 7, and 8  

## Code Description
- The servo motors sweep from 0 to 180 degrees repeatedly for 2 seconds.  
- After 2 seconds, all servos hold at a neutral 90-degree position.

##  How to Use
Connect your servo motors to Arduino pins 2, 4, 7, and 8.

Upload the provided code to your Arduino board.

Power your servos properly.

Observe the servos sweeping for 2 seconds, then holding at 90 degrees.

# Walking Motion Algorithm
Step-by-step algorithm

- Start from a neutral position Set all servos so the legs and arms are straight and steady (around 90 degrees).

- Lift one leg Move the hip and knee servos to raise one foot off the ground.

- Move the lifted leg forward Swing the lifted leg forward by adjusting the hip servo’s angle.

- Shift body weight Transfer the robot’s weight slightly to the supporting leg to keep balance.

- Place the foot down Lower the lifted leg back to the ground smoothly.

- Repeat with the other leg Perform the same steps on the other leg.

- Move the arms Swing the arms opposite to the legs to help with balance.

- Keep repeating the cycle Continue alternating legs like this to create a smooth walking motion.
