//Calculate delayed arrival time
#include <stdio.h>

int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    return (arrivalTime + delayedTime) % 24;
}

int main(void) {
    int arrivalTime, delayedTime;

    scanf("%d %d", &arrivalTime, &delayedTime);

    printf("%d", findDelayedArrivalTime(arrivalTime, delayedTime));
}