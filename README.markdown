# DHT Sensor Comparison

Open chart.html to visualize the CSV data in `serial.csv`. It is also [hosted on GitHub pages](https://geosensorweblab.github.io/dht-sensor-test/chart.html).

Data is from three sensors connected to an Arduino Sensor Shield, which is connected to a LinkIt One. Goal was to compare two DHT11 sensors with a DHT22 sensor. Test ran for approximately 10 hours connected to my MacBook Pro, which logged the results from the serial port.

Code for testing is in `test.ino`. This code relies on [my fork of the Adafruit DHT Sensor Library](https://github.com/GeoSensorWebLab/DHT-sensor-library).

Serial logging code is in `read.rb`. The `serialport` gem must be installed to use it.

## Hardware

![Setup](setup.jpg)

* [MediaTek LinkIt ONE](https://labs.mediatek.com/site/global/developer_tools/overview/index.gsp)
* [SainSmart Arduino Sensor Shield](http://www.sainsmart.com/sainsmart-sensor-shield-v5-4-arduino-apc220-bluetooth-analog-module-servo-motor.html)
* Two [DHT11 Temperature and Relative Humidity Sensors](https://www.amazon.ca/SODIAL-Temperature-Relative-Humidity-arduino/dp/B00K67YK6M/ref=sr_1_3?ie=UTF8&qid=1472063997&sr=8-3&keywords=dht11)
    * Note that on my sensors, `VDO` is `+` and `GND` is `-`.
* [DHT22 Digital Humidity AM2302 and Temperature Sensor](https://www.amazon.ca/XCSOURCE®-Digital-Humidity-Temperature-TE248/dp/B011U8GA40/ref=sr_1_5?ie=UTF8&qid=1472064065&sr=8-5&keywords=dht22)

## License

Code is MIT License.

Data is [PDDL](http://opendatacommons.org/licenses/pddl/) License.
