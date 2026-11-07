//Power of Two
#include <stdio.h>

int isPowerOfTwo(int n) {
    if (n <= 0) {
        return 0;
    }

    while (n % 2 == 0) {
        n = n / 2;
    }

    return n == 1;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPowerOfTwo(n)) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    return 0;
}