//Power of Three
#include <stdio.h>

int isPowerOfThree(int n) {
    if (n <= 0) {
        return 0;
    }

    while (n % 3 == 0) {
        n = n / 3;
    }

    return n == 1;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPowerOfThree(n)) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    return 0;
}