//Print a Right-Aligned Star Triangle
#include <stdio.h>

int main (void){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            printf (" ");
        }
        for (int j = 1; j <= i; j++){
            printf("*");
        }
    printf("\n");
    }
}