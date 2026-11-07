//Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
#include <stdio.h>

int smallestEvenMultiple(int n) {
    if (n % 2 == 0) {
        return n;
    }
    else {
        return n * 2;
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    printf("%d", smallestEvenMultiple(n));

    return 0;
}
