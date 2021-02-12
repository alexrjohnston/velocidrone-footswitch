# velocidrone-footswitch
Low action, low latency foot switch for velocidrone combat

For this project you will need an Arduino Itsybitsy M0, a decent quality microswitch, some prototyping board and two short bits of wire. Here are links to where I got mine:

* High quality microswitch: https://uk.rs-online.com/web/p/tactile-switches/7856308/
* Adafruit Itsybitsy: https://shop.pimoroni.com/products/adafruit-itsybitsy-m0-express-for-circuitpython-arduino-ide
* Protoboard: https://www.amazon.co.uk/Elegoo-Prototype-Soldering-Compatible-Arduino/dp/B073ZHVKC1

![parts](https://github.com/alexrjohnston/velocidrone-footswitch/blob/main/Images/001_bits.jpg)

You could use a cheaper Arduino such as a nano but then you would have to compile and upload the firmware using the usual arduino workflow. Using an Itsybitsy allows you to avoid the Arduino IDE and flash the footswitch by simply double pressing the reset button and dropping the firmware onto the Itsy when it mounts as a removable drive.

The protoboard is also optional although if you are stomping on this thing a fair bit there needs to be something robust holding the switch and the Arduino together.

Wire the switch to the arduino as shown below: (one side of the switch goes to pin 10 and the other goes to ground) - I said pin 11 in the video. I was lying!

![wire1](https://github.com/alexrjohnston/velocidrone-footswitch/blob/main/Images/002_unpressed.jpg) ![wire2](https://github.com/alexrjohnston/velocidrone-footswitch/blob/main/Images/003_pressed.jpg)

If you are fimilar with the Arduino IDE you can download the ino file from my github here: https://github.com/alexrjohnston/velocidrone-footswitch/blob/main/vd_switch.ino

Or if you would like to use the drag and drop method to flash the firmware (much easier if your not fimilar with Arduino) then watch this video for how to: https://www.youtube.com/watch?v=yhj6UJ2CV3E
