//Read from STDIN, Write to STDOUT
#include <stdio.h>

int main(){
    int N;
    char S[1000];

    scanf("%d", &N);
    scanf("%s", S);

    printf("%d\n", N * 2);
    printf("%s\n", S);
}