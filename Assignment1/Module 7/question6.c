//Print a Consecutive-Number Triangle 
#include <stdio.h>

int main (void){
    int n, a = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}