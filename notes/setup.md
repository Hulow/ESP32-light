# sourcing the ESP-IDF environment

command: . ./esp-idf/export.sh

# building

- Ninja 
    - build the app/build
    - bootloader/bootloader.bin – starts the ESP32 at boot.
    - partition_table/partition-table.bin – tells ESP32 how to organize flash memory.
    - app.bin – your actual program.

# Flash

- idf.py -p /dev/cu.usbserial-10 flash

- esptool wrote the binaries to the ESP32 memory:
    - bootloader.bin → address 0x1000
    - partition-table.bin → address 0x8000
    - app.bin → address 0x10000

- Verification
- Hard reset

# Monitor

idf.py -p /dev/cu.usbserial-10 monitor
- to quit: control + 5