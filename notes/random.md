# ESP32-light

https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/linux-macos-setup.html

create app: idf.py create-project app

cd esp-idf &&  . ./export.sh

# dependancies

CP210x VCP Driver

## first time building

idf.py set-target esp32 (This ensures the build system knows which ESP32 chip you’re using.)

idf.py menuconfig (Optional) Configure your project

idf.py build (build project)

idf.py -p /dev/ttyUSB0 flash (flash to ESP32)

idf.py -p /dev/ttyUSB0 monitor (monitore to serial output)

ls /dev/cu.*

## notes

LED WS2812B 12v



platform io

bus ccp 

## drivers

### GPIO driver (driver/gpio.h)
    - Controls general-purpose pins.
    - You can turn a pin high or low, read input pins, configure interrupts, etc.
    - This is the simplest driver and is what you use for blinking an onboard LED.

### RMT driver (driver/rmt.h)
    - RMT = Remote Control Peripheral
    - Hardware peripheral that can generate precise timing signals.
    - Required for controlling WS2812 / NeoPixel LEDs, infrared remotes, some motors, etc.
    - ESP32 has special timing requirements for WS2812 that GPIO toggling alone cannot meet.

### SPI driver (driver/spi_master.h)
    - Communicates with SPI devices (e.g., displays, sensors, flash chips).
    - SPI uses multiple pins: CLK, MOSI, MISO, CS.