# Smart Vehicle Alcohol Detection System

This project is a simple Arduino-based system designed to detect the presence of alcohol in a vehicle. If alcohol is detected, the system will turn off the car ignition and activate a buzzer to alert the driver or passengers. If no alcohol is detected, the car ignition remains on, and the buzzer stays off.

## Components Used

- **Arduino Board**
- **MQ3 Alcohol Sensor** (connected to digital pin 3)
- **Buzzer** (connected to digital pin 10)
- **Car Ignition Relay Module** (simulated by an LED, connected to digital pin 9)

## Code Explanation

The system continuously checks for the presence of alcohol using the MQ3 alcohol sensor. The sensor's status is read using the `digitalRead()` function. If alcohol is detected (`status == HIGH`), the car ignition is turned off and the buzzer is turned on. If no alcohol is detected, the car ignition is turned on and the buzzer is turned off.

### Variables

- `CAR_IGNITION`: Digital pin controlling the car ignition relay.
- `ALCOHOL_SENSOR`: Digital pin connected to the alcohol sensor.
- `BUZZER`: Digital pin connected to the buzzer.
- `ALCOHOL_detected`: Variable to store the alcohol detection status.
- `status`: Variable to store the sensor's digital read status.

### Functions

- **`setup()`**: Initializes serial communication and sets pin modes.
- **`loop()`**: Continuously checks for alcohol detection and takes action accordingly.
- **`checkAlcohol()`**: Reads the alcohol sensor status and returns `true` if alcohol is detected, otherwise returns `false`.
- **`turnOnBuzzer()`**: Activates the buzzer.
- **`turnOffBuzzer()`**: Deactivates the buzzer.
- **`turnOnCarIgnition()`**: Turns on the car ignition (simulated by an LED).
- **`turnOffCarIgnition()`**: Turns off the car ignition (simulated by an LED).

## How to Use

1. Connect the MQ3 alcohol sensor, buzzer, and car ignition relay to the specified pins on the Arduino board.
2. Upload the provided code to your Arduino.
3. Open the Serial Monitor at a baud rate of 9600 to observe the status of alcohol detection.
4. Test the system by bringing alcohol near the sensor and observing the behavior of the buzzer and car ignition.

## License

This project is licensed under the MIT License - see the LICENSE file for details.
