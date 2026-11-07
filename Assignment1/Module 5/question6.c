//Perfect Number
#include <stdio.h>

int main() {
    int n, sum = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("false\n");
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;

            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    if (sum == n) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    return 0;
}