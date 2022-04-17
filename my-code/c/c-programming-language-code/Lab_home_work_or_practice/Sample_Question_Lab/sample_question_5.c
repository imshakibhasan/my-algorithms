#include<stdio.h>
int main() {
    int t;
    float u, g = 9.8, h ;
    printf("\nEnter Initial Velocity(m/s) : ");
    scanf("%f", &u);
    printf("\nEnter Time(in sec) : ");
    scanf("%d", &t);
    // h=ut+0.5gt^2
    h = u * t - 0.5 * g * t * t ;
    printf("Height is : %0.2f", h);
    return 0; 
}