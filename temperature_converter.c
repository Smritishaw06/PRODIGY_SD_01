#include <stdio.h>
int main() {
    float temp, celsius, fahrenheit, kelvin;
    char unit;

    // Taking input
    printf("Enter temperature value: ");
    scanf("%f", &temp);

    printf("Enter unit (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &unit);

    // Conversion logic
    if (unit == 'C' || unit == 'c') {
        celsius = temp;
        fahrenheit = (celsius * 9 / 5) + 32;
        kelvin = celsius + 273.15;

        printf("\nTemperature in Fahrenheit: %.2f F", fahrenheit);
        printf("\nTemperature in Kelvin: %.2f K", kelvin);
    }
    else if (unit == 'F' || unit == 'f') {
        fahrenheit = temp;
        celsius = (fahrenheit - 32) * 5 / 9;
        kelvin = celsius + 273.15;

        printf("\nTemperature in Celsius: %.2f C", celsius);
        printf("\nTemperature in Kelvin: %.2f K", kelvin);
    }
    else if (unit == 'K' || unit == 'k') {
        kelvin = temp;
        celsius = kelvin - 273.15;
        fahrenheit = (celsius * 9 / 5) + 32;

        printf("\nTemperature in Celsius: %.2f C", celsius);
        printf("\nTemperature in Fahrenheit: %.2f F", fahrenheit);
    }
    else {
        printf("\nInvalid unit entered!");
    }

    return 0;
}
