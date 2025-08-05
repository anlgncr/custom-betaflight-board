# custom-betaflight-board
This repository contains a Betaflight board configuration that enables the use of an STM32F411 development board as a custom flight controller.

In this custom flight controller project, we will use the Blackpill STM32F411 development board together with a BMI160 IMU. Optionally, a buzzer and a voltage divider circuit can also be added for extra functionality such as battery voltage monitoring and low battery alerts.
![STM32F411CEU6_WeAct_Black_Pill_V2 0-1](https://github.com/user-attachments/assets/8774815d-27a9-417e-8fad-c51c0a6979aa)

We will use the BMI160 IMU sensor in SPI mode.
![bmi160-full](https://github.com/user-attachments/assets/24f1540d-35d0-487e-9cce-bbdc03423a39)

Let's build the circuit as shown in the image below.
<img width="1428" height="579" alt="Ekran görüntüsü 2025-08-05 182746" src="https://github.com/user-attachments/assets/089f764d-74cd-4e8d-a9ed-436ffbaef7fb" />

* To build the Betaflight firmware, start by downloading the MSYS2 development environment from the following link: https://www.msys2.org/

* Once MSYS2 is installed, launch the MSYS2 UCRT64 terminal and run the following commands in order:

```bash
pacman -Syu
pacman -S git make
cd c:
mkdir betaflight
cd betaflight
git clone --recursive https://github.com/betaflight/betaflight.git betaflight-4.5.2
cd betaflight-4.5.2
git checkout -b release-4.5.2 tags/4.5.2
make arm_sdk_install
```

* Once this command completes the download; Please reorganize the folder inside c:/betaflight/betaflight-4.5.2/tools named gcc-arm-none-eabi-10.3-2021.10 which currently contains another folder with the same name nested inside it. The final structure should be:

c:/betaflight/betaflight-4.5.2/tools/gcc-arm-none-eabi-10.3-2021.10

export PATH=$PATH:/c/betaflight/betaflight-4.5.2/tools/gcc-arm-none-eabi-10.3-2021.10/bin

arm-none-eabi-gcc --version

* Provided the gcc-arm-none-eabi folder has been properly reorganized, you will be able to verify its version.

* Paste the BLACKPILL folder inside the C:\betaflight\betaflight-4.5.2\src\config\configs path.
  
* After that, execute the following command;

make BLACKPILL

* After the build process completes, the hex file will be generated in the C:\betaflight\betaflight-4.5.2\obj folder.

* If everything is set, flash the hex file to the STM32F411 board using Betaflight Configurator.

* Download Betaflight Configurator for your OS from:

https://github.com/betaflight/betaflight-configurator/releases

* Open the Configurator.

* Enter boot mode by holding BOOT while plugging the board into the PC, or if connected, hold BOOT and press RESET once.

* Go to Firmware Flasher tab, click Load Firmware (Local), and select the hex file.

* Click Flash Firmware to start flashing.





