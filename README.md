# custom-betaflight-board
This repository contains a Betaflight board configuration that enables the use of an STM32F411 development board as a custom flight controller.

In this custom flight controller project, we will use the Blackpill STM32F411 development board together with a BMI160 IMU. Optionally, a buzzer and a voltage divider circuit can also be added for extra functionality such as battery voltage monitoring and low battery alerts.
![STM32F411CEU6_WeAct_Black_Pill_V2 0-1](https://github.com/user-attachments/assets/8774815d-27a9-417e-8fad-c51c0a6979aa)

We will use the BMI160 IMU sensor in SPI mode.
![bmi160-full](https://github.com/user-attachments/assets/24f1540d-35d0-487e-9cce-bbdc03423a39)

Let's build the circuit as shown in the image below.
<img width="1428" height="579" alt="Ekran görüntüsü 2025-08-05 182746" src="https://github.com/user-attachments/assets/089f764d-74cd-4e8d-a9ed-436ffbaef7fb" />

To build the Betaflight firmware, start by downloading the MSYS2 development environment from the following link: https://www.msys2.org/



