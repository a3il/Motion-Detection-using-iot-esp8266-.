# Motion-Detection-using-iot-esp8266 NODEMCU

This project uses a PIR sesnor to detect motion using temperature changes which then sends a PWM signal to the Node MCU Which then sends data to adafruit cloud.We are using Adafruits Iot instead of Blynk platforms as it is paid and not open source.


We are using NODEMCU Esp8266 IOT microcontroller for for digital read and digital write to LED,The esp8266 has built-in wifi which allows us to connect to adafruit,Cloud.

adafruit has its own similar to like blynk template id,auth token for each person.
We are using any two digital pins,to read the pir sensor output and then digitally write to turn on a LED.Which also then sends packet to the cloud,ie serially print the serial monitor in cloud.Prints('motion detected')

The PIR Sensor rquires pull up resitors to read accurately as the nodemcu has only 3.3 as Vcc.
