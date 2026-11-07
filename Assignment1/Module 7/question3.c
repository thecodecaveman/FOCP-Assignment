//Print an Inverted Triangle
#include <stdio.h>

int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        for (int j = i; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }
}