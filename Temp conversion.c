#include <stdio.h>

int main() {
    float temp, converted;
    char choice;

    printf("Enter 'C' to convert from Celsius to Fahrenheit, or 'F' to convert from Fahrenheit to Celsius: ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", converted);
    } else if (choice == 'F' || choice == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", converted);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
