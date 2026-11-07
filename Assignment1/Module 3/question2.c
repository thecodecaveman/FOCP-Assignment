/*Given an integer num, return the number of steps to reduce it to zero.*/
#include <stdio.h>

int numberOfSteps(int num) {
    int c = 0;

    while (num > 0) {
        if (num % 2 == 0) {
            num = num / 2;
        }
        else {
            num -= 1;
        }
        c++;
    }
    return c;
}

int main(void) {
    int num;

    scanf("%d", &num);

    printf("%d", numberOfSteps(num));
}
