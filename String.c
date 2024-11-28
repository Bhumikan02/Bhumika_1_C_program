#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);

    // strlen
    printf("Length of first string: %lu\n", strlen(str1));
    
    // strcpy
    strcpy(str2, str1);
    printf("Copied second string: %s\n", str2);
    
    // strcat
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    
    // strcmp
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result > 0) {
        printf("First string is greater.\n");
    } else {
        printf("Second string is greater.\n");
    }

    return 0;
}
