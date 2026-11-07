
/*Danial likes to  separate out the digits of a number and play with them. This time he wants you to help him with a problem. Given an integer N, he would like you to find the sum of the first and last digits of N.
INPUT: The first line of the input contains a single integer T , denoting the number of test cases. Each of the next T lines contains a single integer N.
OUTPUT: Each line of the output contains a single integer S denoting the sum of the first and last digits of N.*/
#include <stdio.h>

int main() {
    int T, N;
    int first, last, temp;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        last = N % 10;
        temp = N;

        while (temp >= 10) {
            temp = temp / 10;
        }

        first = temp;

        printf("%d\n", first + last);
    }
}