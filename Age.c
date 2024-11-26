#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18 && age <= 35) {
        printf("You are a young adult.\n");
    } else {
        printf("You are not a young adult.\n");
    }

    return 0;
}
