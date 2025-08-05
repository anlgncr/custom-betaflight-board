
# STM32F411 Betaflight Board Configuration
This repository contains a Betaflight board configuration that enables the use of an STM32F411 development board as a custom flight controller.

Hardware Used
* STM32F411 Development Board (Blackpill)
* BMI160 IMU (used in SPI mode)
* (Optional) Buzzer for low battery alert
* (Optional) Voltage Divider Circuit for battery voltage monitoring

<img width="500" alt="STM32F411 Development Board" src="https://github.com/user-attachments/assets/8774815d-27a9-417e-8fad-c51c0a6979aa" />
<br/>
https://stm32-base.org/boards/STM32F411CEU6-WeAct-Black-Pill-V2.0.html
<hr/>


BMI160 IMU

<img width="250" alt="BMI160 IMU" src="https://github.com/user-attachments/assets/24f1540d-35d0-487e-9cce-bbdc03423a39" />
<hr/>

# Circuit Setup
Let's build the circuit as shown in the image below.

<img width="1428" height="579" alt="Circuit" src="https://github.com/user-attachments/assets/089f764d-74cd-4e8d-a9ed-436ffbaef7fb" />
<hr/>

# Building Betaflight Firmware
1. Install MSYS2
   
Download the MSYS2 development environment from:

👉 https://www.msys2.org/

Then open the MSYS2 UCRT64 terminal and run the following commands:

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

2. Fix Toolchain Directory Structure

After the toolchain is downloaded, reorganize the folder at:
c:/betaflight/betaflight-4.5.2/tools/gcc-arm-none-eabi-10.3-2021.10/gcc-arm-none-eabi-10.3-2021.10
Move its contents up one level, so the final path becomes:

c:/betaflight/betaflight-4.5.2/tools/gcc-arm-none-eabi-10.3-2021.10

Then update your PATH and verify the toolchain:
```bash
export PATH=$PATH:/c/betaflight/betaflight-4.5.2/tools/gcc-arm-none-eabi-10.3-2021.10/bin
arm-none-eabi-gcc --version
```
If everything is organized correctly, this should display the GCC version.

3. Add Target Configuration
   
Copy your BLACKPILL folder into:
C:\betaflight\betaflight-4.5.2\src\config\configs
  
Then build the firmware:

```bash
make BLACKPILL
```

After building, the .hex file will be generated in:

 ```text
C:\betaflight\betaflight-4.5.2\obj folder.
```

# Flashing the Firmware
Download Betaflight Configurator for your OS:

👉 https://github.com/betaflight/betaflight-configurator/releases

* Launch the Configurator.
* Enter boot mode:
* Hold the BOOT button while connecting the board to your PC,
or If already connected, hold BOOT, then press RESET once.

In the Firmware Flasher tab:
* Click Load Firmware (Local) and select the generated .hex file.
* Click Flash Firmware.

If you have any questions or encounter any problems, don’t hesitate to ask!





