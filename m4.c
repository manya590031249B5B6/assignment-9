
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int findGCD(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int findLCM(int a, int b, int c) {
    int lcm1 = (a / gcd(a, b)) * b;
    return (lcm1 / gcd(lcm1, c)) * c;
}

int main() {
    int a, b, c;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("GCD = %d\n", findGCD(a, b, c));
    printf("LCM = %d\n", findLCM(a, b, c));

    return 0;
}
