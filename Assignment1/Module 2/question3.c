/* HackerLand University has the following grading policy:
Every student receives a grade in the inclusive range from 0 to 100.
Any grade less than 40 is a failing grade. */

#include <stdio.h>
int gradingStudents(int n) {
    if (n < 38){
        return n;
    }
    else if (n % 5 >= 3){
        return n + (5 - n % 5);
    }
    else{
        return n;
    }
}

int main(void){
    int n, grade;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        scanf("%d", &grade);
        printf("%d\n", gradingStudents(grade));
    }
}