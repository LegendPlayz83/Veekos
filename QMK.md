## Flashing & Configuring the Macropad

Steps to install the firmware and configure the Macropad:-

### 1. Download the .uf2 file from repo
Download it and save it on your computer locally

### 2. Enter Boot Mode on the Xiao
1. Unplug the Xiao from your computer.
2. Hold down the **BOOTSEL** button on the Xiao.
3. While holding the button, plug the Xiao into your computer using a USB cable.
4. The computer will detect a new drive, namely **RPI-RP2**.

### 3. Flash the Firmware
1. Download the `.uf2` firmware file from this repo.
2. Drag and drop the file onto the **RPI-RP2** drive.

Once the file finishes copying, the Xiao will reboot automatically.

### 5. Configure the Keymap
You can customise the Macropad layout in the .json file and keymap. c.c

Open the file in a text editor and edit the keymap section to match the layout.  
After saving the file, the Macropad will automatically reload with the new configuration.

### 6. Test the Macropad
Unplug and reconnect the Macropad, open a text editor, and press some keys to make sure everything works.

KABOOMMMM 
ITS DONNEEE
