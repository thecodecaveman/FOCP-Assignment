/*An integer  is a divisor of an integer n if the remainder of n/d = 0.
Given an integer, for each digit that makes up the integer determine
whether it is a divisor. Count the number of divisors occurring within the integer*/
#include <stdio.h>

int findDigits(int n) {
    int count = 0;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;

        if (digit != 0 && n % digit == 0) {
            count++;
        }

        temp = temp / 10;
    }

    return count;
}

int main() {
    int T, n;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &n);

        printf("%d\n", findDigits(n));
    }
}