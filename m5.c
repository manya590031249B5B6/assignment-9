
#include <stdio.h>

int total(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

float percentage(int sum) {
    return sum / 5.0;
}

char grade(float p) {
    if (p >= 90)
        return 'A';
    else if (p >= 80)
        return 'B';
    else if (p >= 70)
        return 'C';
    else if (p >= 60)
        return 'D';
    else
        return 'E';
}

int passed(int a, int b, int c, int d, int e) {
    return (a >= 40 && b >= 40 && c >= 40 &&
            d >= 40 && e >= 40);
}

int main() {
    int a, b, c, d, e, sum;
    float p;

    printf("Enter marks in five subjects (out of 100): ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = total(a, b, c, d, e);
    p = percentage(sum);

    printf("Total Marks = %d/500\n", sum);
    printf("Percentage = %.2f%%\n", p);

    if (passed(a, b, c, d, e)) {
        printf("Grade = %c\n", grade(p));
        printf("Result = Pass\n");
    } else {
        printf("Grade = F\n");
        printf("Result = Fail\n");
    }

    return 0;
}
