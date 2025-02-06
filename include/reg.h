#ifndef REG_H__
#define REG_H__

/**
 * @brief ATmega328P ADC Register Definitions
 */
#define ADMUX   (*(volatile uint8_t *)0x7C)
#define ADCSRA  (*(volatile uint8_t *)0x7A)
#define ADCL    (*(volatile uint8_t *)0x78)
#define ADCH    (*(volatile uint8_t *)0x79)
#define ADC     (*(volatile uint16_t *)0x78) // ADCL + ADCH

// Bit definitions
#define REFS0  6  // Reference Selection Bit 0 (Bit 6 in ADMUX)
#define ADLAR  5  // Left Adjust Result Bit (Bit 5 in ADMUX)
#define ADSC   6  // ADC Start Conversion Bit (Bit 6 in ADCSRA)
#define ADEN   7  // ADC Enable Bit (Bit 7 in ADCSRA)

// Prescaler Definations
#define ADPS0 0
#define ADPS1 1
#define ADPS2 2

// ADC Channel Definitions
#define ADC0 0x0
#define ADC1 0x1
#define ADC2 0x2
#define ADC3 0x3
#define ADC4 0x4
#define ADC5 0x5
#define ADC6 0x6
#define ADC7 0x7
#define ADC8 0x8

#endif // REG_H__