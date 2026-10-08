
#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;
    if (n < 0) n = -n;

    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int countDigits(int n) {
    int count = 0;
    if (n < 0) n = -n;

    do {
        count++;
        n = n / 10;
    } while (n > 0);

    return count;
}

int reverse(int n) {
    int rev = 0, digit;
    int sign = (n < 0) ? -1 : 1;
    if (n < 0) n = -n;

    while (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev * sign;
}

int isPalindrome(int n) {
    if (n < 0)
        return 0;

    return n == reverse(n);
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumDigits(n));
    printf("Count of digits = %d\n", countDigits(n));
    printf("Reversed number = %d\n", reverse(n));

    if (isPalindrome(n))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
