# PneumaticAirbrake
Pneumatic airbrake for rear wings

# *********************************************************************************************
# Project Developed by @carbon_GTV , support me on instagram, also donations are very welcome!
# *********************************************************************************************

### Parts List
1. **Arduino Uno**: Control unit of the system.
2. **Pneumatic Cylinders**: Two pieces, for operating the airbrakes.
3. **3/2-Way Valves**: Two pieces, one for each cylinder.
4. **Air Source**: Compressor or compressed air bottle.
5. **Hoses and Connectors**: For connecting valves, cylinders, and air source.
6. **Button or Sensor**: To trigger the airbrakes.
7. **Relay Module**: To control the electro-pneumatic valves.

## Videos
You need all the parts you see here: 
https://www.instagram.com/reel/C0_A3zPI9OU/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==



### Connection Plan
- **Pneumatic Valves**: 
  - Valve for the first cylinder connected to pin 2 of the Arduino
  - Valve for the second cylinder connected to pin 3 of the Arduino
- **Button/Sensor**: 
  - Connected to a digital pin of the Arduino, e.g., pin 4
- **Relay Module**: 
  - Connected to the corresponding pins of the Arduino and to the valves.

### Arduino Code
The code controls the two pneumatic cylinders via the 3/2-way valves. When the button is pressed or the sensor is activated, both valves open, and the cylinders are activated.



### Additional Notes
- **Safety**: Ensure that all components are correctly connected and the power supply is adequate.
- **Testing**: Test the system thoroughly before using it in a vehicle or other application.
- **Calibration**: Adjust the delay times in the code to suit your specific needs.

With these instructions and the provided code, you should be able to install and operate your pneumatic airbrake control system.
