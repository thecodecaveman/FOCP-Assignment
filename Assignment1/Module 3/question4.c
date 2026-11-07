/*Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).*/
#include <stdio.h>

int countOdds(int low, int high) {
    int c = 0;

    for (; low <= high; low++) {
        if (low % 2 != 0) {
            c++;
        }
    }

    return c;
}

int main(void) {
    int low, high;

    scanf("%d %d", &low, &high);

    printf("%d", countOdds(low, high));

    return 0;
}
