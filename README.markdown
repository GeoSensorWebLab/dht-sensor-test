# DHT Sensor Comparison

Open chart.html to visualize the CSV data in `serial.csv`. It is also [hosted on GitHub pages](https://geosensorweblab.github.io/dht-sensor-test/chart.html).

Data is from three sensors connected to an Arduino Sensor Shield, which is connected to a LinkIt One. Goal was to compare two DHT11 sensors with a DHT22 sensor. Test ran for approximately 10 hours connected to my MacBook Pro, which logged the results from the serial port.

Code for testing is in `test.ino`. This code relies on [my fork of the Adafruit DHT Sensor Library](https://github.com/GeoSensorWebLab/DHT-sensor-library).

Serial logging code is in `read.rb`. The `serialport` gem must be installed to use it.

## License

Code is MIT License.

Data is [PDDL](http://opendatacommons.org/licenses/pddl/) License.
