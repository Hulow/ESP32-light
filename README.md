# ESP32-light

create app: idf.py create-project app

cd esp-idf &&  . ./export.sh

## first time building

idf.py set-target esp32 (This ensures the build system knows which ESP32 chip you’re using.)

idf.py menuconfig

idf.py menuconfig (Optional) Configure your project

idf.py build (build project)

idf.py -p /dev/ttyUSB0 flash (flash to ESP32)

idf.py -p /dev/ttyUSB0 monitor (monitore to serial output)
