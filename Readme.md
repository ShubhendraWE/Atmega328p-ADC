# ADC Project

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

## Contributing
Contributions are welcome! Please fork the repository and submit a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.