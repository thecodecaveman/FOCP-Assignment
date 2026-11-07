//Factorial
#include <stdio.h>

int main() {
    int n, i, j;
    int result[5000];
    int size = 1;

    scanf("%d", &n);

    result[0] = 1;

    for (i = 2; i <= n; i++) {
        int carry = 0;

        for (j = 0; j < size; j++) {
            int product = result[j] * i + carry;

            result[j] = product % 10;
            carry = product / 10;
        }

        while (carry > 0) {
            result[size] = carry % 10;
            carry = carry / 10;
            size++;
        }
    }

    for (i = size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }

    printf("\n");

    return 0;
}