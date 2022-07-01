# RP2040 Base Template

This is a basic project template using the Pico SDK for project based on the RP2040 Cortex M0+ microcontroller from Raspberry Pi.

## Project structure

* The C/C++ sources are located in the ```src```folder
* PIO sources are located in the ```piosrc``` folder and all files ending with *.pio will be automatically compiled
* The includes are in ```include```
* Libraries and hardware drivers go into the ```lib``` folder and follow the same src/piosrc/include scheme

## Project settings

The project settings, definitions of pins, FreeRTOS settings (wether to use or not) can be set in ```ìnclude/project_config.h```.
There are some extra settings for FreeRTOS in the FreeRTOSConfig.h, but I wouldn't recommend touching them unless you know what you are doing.