/*Subtract the Product and Sum of Digits of an Integer*/
#include <stdio.h>

int subtractProductAndSum(int n) {
    int a, s = 0, p = 1, d = 0;

    for (; n != 0; n = n / 10) {
        a = n % 10;
        s += a;
        p *= a;
    }

    d = p - s;

    return d;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Result = %d\n", subtractProductAndSum(n));
}