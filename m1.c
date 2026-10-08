
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

void divide(int a, int b) {
    if (b == 0)
        printf("Division by zero is not allowed.\n");
    else
        printf("Division = %d\n", a / b);
}

void modulus(int a, int b) {
    if (b == 0)
        printf("Modulus by zero is not allowed.\n");
    else
        printf("Modulus = %d\n", a % b);
}

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Addition = %d\n", add(x, y));
    printf("Subtraction = %d\n", subtract(x, y));
    printf("Multiplication = %d\n", multiply(x, y));

    divide(x, y);
    modulus(x, y);

    return 0;
}
