"""
Created by: Youngwook Go
Created on: OCT 2023
Checks distances with sonar sensor.
"""

import time
import board
import adafruit_hcsr04

// setup
sonar = adafruit_hcsr04.HCSR04(trigger_pin=board.GP1, echo_pin=board.GP0)

while True:
    try:
        print((sonar.distance,))
    except RuntimeError:
        print("Retrying!")
    time.sleep(0.1)