#include<stdio.h>
int main() {
    float x=0, y=0;
    char direction;
    float mile;

    while (1) {
        printf("Please input the direction as N,S,E,W (0 to exit): ");
        scanf("%c", &direction);
        fflush(stdin);

        if (direction=='0') { 
        break;
        }
        if (direction!='N' && direction!='S' && direction!='E' && direction!='W') {
        printf("Invalid direction, re-enter \n");
        continue;
        }
        printf("Please input the mile in %c direction: ", direction);
        scanf ("%f",&mile);
        fflush(stdin);

        if (direction == 'N') {
        y += mile;
        }
        else if (direction == 'E') {
        x += mile;
        }
        else if (direction == 'W') {
        x -= mile;
        }
        else if (direction == 'S') {
        y -= mile;
        }
    }
    printf("Current position of A: (%.2f,%.2f)\n",x,y);
    return 0;
}