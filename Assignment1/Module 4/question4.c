//Count the Digits That Divide a Number
#include <stdio.h>

int countDigits(int num) {
    int a, c = 0;
    int original = num;

    for (; num != 0; num /= 10) {
        a = num % 10;

        if (a != 0 && original % a == 0) {
            c++;
        }
    }

    return c;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Count = %d\n", countDigits(num));
}