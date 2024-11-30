#include <stdio.h>

int main() {
    int choice;
    float value, converted;

    printf("Choose the conversion type:\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Grams to Kilograms\n");
    printf("4. Kilograms to Grams\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter value in meters: ");
            scanf("%f", &value);
            converted = value / 1000;
            printf("Value in kilometers: %.3f\n", converted);
            break;
        case 2:
            printf("Enter value in kilometers: ");
            scanf("%f", &value);
            converted = value * 1000;
            printf("Value in meters: %.2f\n", converted);
            break;
        case 3:
            printf("Enter value in grams: ");
            scanf("%f", &value);
            converted = value / 1000;
            printf("Value in kilograms: %.3f\n", converted);
            break;
        case 4:
            printf("Enter value in kilograms: ");
            scanf("%f", &value);
            converted = value * 1000;
            printf("Value in grams: %.2f\n", converted);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
