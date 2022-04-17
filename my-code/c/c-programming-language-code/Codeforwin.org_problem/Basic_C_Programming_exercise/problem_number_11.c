#include <stdio.h>
#include <math.h>
int main() {
    double base, expo, power;
    printf("\nEnter Value Of Base : ");
    scanf("%lf", &base);
    printf("\nEnter value of Expo : ");
    scanf("%lf", &expo);

    power = pow(base,expo);
    printf("\n %.2lf^%.2lf = %.2lf", base,expo,power);

    return 0;
} 