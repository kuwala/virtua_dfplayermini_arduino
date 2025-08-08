# Virtua DFPlayerMini 
The mp3 player modules are these: https://wiki.dfrobot.com/dfplayer_mini_sku_dfr0299
You will need a 1k resistor.
Odly the mp3 player modules did not work with serial from the start I had to touch IO_1 on mp3 player's pin 9 to ground a few times to trigger it to start play the mp3 files. Then after that it worked fine via serial.
The change seemed to persist after power down and up too.

The SD card root needs to have a mp3 folder place the mp3s there. the mp3 files should be titled 0001.mp3 0002.mp3 and so on. 
