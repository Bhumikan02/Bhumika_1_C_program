#include <stdio.h>

void add(int x, int y) {
    x = x + y;
    printf("Sum inside function: %d\n", x);
}

int main() {
    int a = 5, b = 10;
    add(a, b);
    printf("Value of a in main: %d\n", a);
    return 0;
}
