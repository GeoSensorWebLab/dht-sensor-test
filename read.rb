#!/bin/env ruby -wKU

require 'date'
require 'serialport'

port = ARGV[0]
baud_rate = ARGV[1] || 9600

file = "serial.log"

serial = SerialPort.new(port, baud_rate, 8, 1, SerialPort::NONE)

begin
  while true do
    while (i  = serial.gets.chomp) do
      date = DateTime.now.strftime("%Y-%m-%dT%H:%M:%S.%3N%z")
      output = date + "," + i
      $stdout.puts output
      File.write(file, output + "\n", { mode: 'a' })
    end
  end
ensure
  serial.close
end
