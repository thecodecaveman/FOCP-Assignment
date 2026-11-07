//Total Distance Traveled
#include <stdio.h>

int distanceTraveled(int mainTank, int additionalTank) {
    int distance = 0;
    while (mainTank >= 5) {
        distance += 50;
        mainTank -= 5;
        if (additionalTank >= 1) {
            mainTank += 1;
            additionalTank--;
        }
    }
    distance += mainTank * 10;
    return distance;
}

int main(void) {
    int mainTank, additionalTank;
    scanf("%d %d", &mainTank, &additionalTank);
    printf("%d", distanceTraveled(mainTank, additionalTank));
}
