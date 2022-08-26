# Motion-Detection-using-iot-esp8266 NODEMCU

This project uses a PIR sesnor to detect motion using temperature changes which then sends a PWM signal to the Node MCU Which then sends data to adafruit cloud.We are using Adafruits Iot instead of Blynk platforms as it is paid and not open source.


We are using NODEMCU Esp8266 IOT microcontroller for for digital read and digital write to LED,The esp8266 has built-in wifi which allows us to connect to adafruit,Cloud.

adafruit has its own similar to like blynk template id,auth token for each person.
We are using any two digital pins,to read the pir sensor output and then digitally write to turn on a LED.Which also then sends packet to the cloud,ie serially print the serial monitor in cloud.Prints('motion detected')

The PIR Sensor rquires pull up resitors to read accurately as the nodemcu has only 3.3 as Vcc.


![WhatsApp Image 2022-08-26 at 7 19 07 PM](https://user-images.githubusercontent.com/111580618/186918733-0d42e2a6-70d3-4701-96c2-78bfb8213f77.jpeg)
![WhatsApp Image 2022-08-26 at 7 19 06 PM (1)](https://user-images.githubusercontent.com/111580618/186918743-6d945acc-a515-4725-9a57-9a0a28e99cd2.jpeg)
![WhatsApp Image 2022-08-26 at 7 19 06 PM](https://user-images.githubusercontent.com/111580618/186918746-9d58c9c5-2452-4fb7-8688-d289eb532e40.jpeg)

