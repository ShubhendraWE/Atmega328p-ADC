# ADC Project

![License](https://img.shields.io/badge/license-MIT-blue.svg)
![Open Source](https://badges.frapsoft.com/os/v1/open-source.svg)
![Made with VSCode](https://img.shields.io/badge/Made%20with-VSCode-1f425f.svg)

This project is developed using PlatformIO and is focused on Analog-to-Digital Conversion (ADC).

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Register Definitions](#register-definitions)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction
This project demonstrates the use of ADC to convert analog signals to digital values. It is designed to work with various microcontrollers supported by PlatformIO.

## Features
- Analog signal reading
- Digital value conversion
- Configurable ADC settings
- Support for multiple microcontrollers

## Register Definitions
The following are the register definitions used in this project for the ATmega328P microcontroller:

- `ADMUX`: ADC Multiplexer Selection Register
  - `REFS0`: Reference Selection Bit 0 (Bit 6 in ADMUX)
  - `ADLAR`: Left Adjust Result Bit (Bit 5 in ADMUX)

- `ADCSRA`: ADC Control and Status Register A
  - `ADSC`: ADC Start Conversion Bit (Bit 6 in ADCSRA)
  - `ADEN`: ADC Enable Bit (Bit 7 in ADCSRA)
  - `ADPS0`, `ADPS1`, `ADPS2`: ADC Prescaler Select Bits

- `ADCL`: ADC Data Register Low Byte
- `ADCH`: ADC Data Register High Byte
- `ADC`: Combined ADC Data Register (ADCL + ADCH)

- ADC Channel Definitions:
  - `ADC0` to `ADC8`: ADC Channels 0 to 8

## Installation
1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/adc-project.git
    ```
2. Navigate to the project directory:
    ```sh
    cd adc-project
    ```
3. Open the project with PlatformIO:
    ```sh
    platformio init --board <your_board>
    ```

## Usage
1. Connect your microcontroller to your computer.
2. Upload the firmware using PlatformIO:
    ```sh
    platformio run --target upload
    ```
3. Open a serial monitor to view the ADC readings:
    ```sh
    platformio device monitor
    ```

## Converting ADC Value to float(in Volts)

#### Step 1: Measure AVCC using the 1.1V Internal Reference
- The ATmega328P allows you to measure AVCC by setting the ADC input to the internal 1.1V reference (ADC channel 14).
- Since the ADC reference is set to AVCC, the ADC reading gives the ratio of 1.1V to AVCC.
- The formula to calculate AVCC is:
*** 
  $$
  A_{VCC} = \frac{1.1V \times 1024 }{ADC_{Readings}}
  $$

Where:

- $A_{VCC}$ = Voltage received at Analog Vcc pin
- $ADC_{Readings}$ = ADC reading at channel 14(internal ADC channel for $V_{ref}$)

***

#### Step 2: Use AVCC to Convert ADC Readings to Voltage
-	Once you have AVCC, you can convert any ADC reading using:

* * *

  $$
   V_{in} = \frac{ADC_{Readings} \times A_{VCC}}{1024}
  $$

Where:
  - $V_{in}$ = Voltage at analog pin ($A_{0}$ - $A_ {5}$)
  - $ADC_{Readings}$ = 10 bit ADC reading at  analog pin ($A_{0}$ - $A_ {5}$)

* * *

## Contributing
Contributions are welcome! Please fork the repository and submit a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.