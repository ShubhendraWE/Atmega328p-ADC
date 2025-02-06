#include <Arduino.h>
#include <reg.h>

/**
 * @brief ADC Read Function
 *
 * @param ADC pin for ADC A0-A5 (0-5)
 * @return uint16_t ADC Value
 */
uint16_t ReadAdc(uint8_t pin)
{
  ADMUX = (1 << REFS0) | (pin & 0x07) | (0 << ADLAR);                // Use AVCC as reference, select ADC channel
  ADCSRA = (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1); // Enable ADC, set prescaler to 64

  ADCSRA |= (1 << ADSC); // Start ADC conversion

  while (ADCSRA & (1 << ADSC))
    ; // Wait until conversion completes

  return ADC; // Read 10-bit ADC result
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  uint16_t adcValue = ReadAdc(0);
  Serial.println(adcValue);
  delay(1000);
}