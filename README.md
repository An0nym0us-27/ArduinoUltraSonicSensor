# ArduinoUltraSonicSensor

The purpose of this project is to implement the ultra-sonic sensor using the Arduino uno.
The sensor was implemented using the "NewPing" library.
The ultra sonic sensor can detect objects within a range from 0-400cm.

The ultra-sonic sensor works by sending a ping and listening for that ping. The amount of time in micro seconds is how the ultra-sonic sensor measures how far the object is.

The "NewPing" library contains a function that makes it easy to store the value of micro seconds it took for the ping to get back to the sensor. From there the distance in cm can be calculated by dividing the micro seconds by the cm function contained within the "NewPing" library.

In this implementation, the ultra-sonic sensor is frequently sending and listening for pings and updating the distance to the serial window.
