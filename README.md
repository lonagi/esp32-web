Before going straight to the project, it is important to outline what our web server will do, so that it is easier to follow the steps later on.

The web server you’ll build controls two LEDs connected to the ESP32 GPIO 26 and GPIO 27;
You can access the ESP32 web server by typing the ESP32 IP address on a browser in the local network;
By clicking the buttons on your web server you can instantly change the state of each LED.
This is just a simple example to illustrate how to build a web server that controls outputs, the idea is to replace those LEDs with a relay, or any other electronic components you want.


![alt](components.jpg)
ESP32 development board –  read ESP32 Development Boards Review and Comparison
2x 5mm LED
2x 330 Ohm resistor
Breadboard
Jumper wires


Schematic
Start by building the circuit. Connect two LEDs to the ESP32 as shown in the following schematic diagram – one LED connected to GPIO 26, and the other to GPIO 27.

Note: We’re using the ESP32 DEVKIT DOIT board with 36 pins. Before assembling the circuit, make sure you check the pinout for the board you’re using.

