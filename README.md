The LCD module used is [0.85inch LCD Display Module, IPS Panel, 128×128 Resolution, SPI Interface, 65K colors](https://www.waveshare.com/product/displays/lcd-oled/lcd-oled-3/0.85inch-lcd-module.htm?___SID=U). Its LCD driver is the GC9107 and is 128x128 pixels

We want to enable the shell in the emulated uart of the JTAG usb if we can. This way we can have a single usb port that acts as uart and debugging, also gives power.

Why usb uart? Because we want to configure the device specs using the usb-uart (wifi connection, spotify connection etc). These options should be managed by NVS or settings subsystem

The app is built using

```bash
west build -p always -b esp32c6_devkitc/esp32c6/hpcore -S flash-4M .\app
```
