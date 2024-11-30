#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int length = 0, hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    int i;

    printf("Enter a password: ");
    scanf("%s", password);

    length = strlen(password);

    for (i = 0; i < length; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (islower(password[i]))
            hasLower = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else if (ispunct(password[i]))
            hasSpecial = 1;
    }

    if (length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        printf("Password is strong.\n");
    } else {
        printf("Password does not meet the criteria.\n");
    }

    return 0;
}
