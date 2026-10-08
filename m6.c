#include <stdio.h>

void operations(int a, int b, int *sum, int *diff, int *prod, float *quot)
{
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;

    if (b != 0)
        *quot = (float)a / b;
    else
        *quot = 0;
}

int main()
{
    int a, b, sum, diff, prod;
    float quot;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    operations(a, b, &sum, &diff, &prod, &quot);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    if (b != 0)
        printf("Quotient = %.2f\n", quot);
    else
        printf("Division by zero is not allowed.\n");

    return 0;
}