# Testing the kernel

Now that we have gone through all of the source code, it is time to see it work. To build and test the kernel you need to do the following:

1. Execute ./build.sh or ./build.bat from src/lesson01 in order to build the kernel.
2. Copy the generated kernel8.img file to the boot partition of your Raspberry Pi flash card and delete kernel7.img as well as any other kernel*.img files that may be present on your SD card. Make sure you left all other files in the boot partition untouched (see 43 and 158 issues for details)
3. Modify the config.txt file as described in the previous section.
4. Connect the USB-to-TTL serial cable as described in the Prerequisites.
5. Power on your Raspberry Pi.
6. Open your terminal emulator. You should be able to see the Hello, world! message there.
