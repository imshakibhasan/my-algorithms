#include<stdio.h>
int main() {
    
    float x, y, x_plus_y, x_minus_y;
    
    printf("\nEnter Value of X+Y : ");
    scanf("%f", &x_plus_y);

    printf("\nEnter Value of X-Y :");
    scanf("%f", &x_minus_y);
    
    x = (x_plus_y + x_minus_y) /2;
    printf("\nValue of X is : %0.2f", x);
    
    y = (x_plus_y - x_minus_y) / 2;
    printf("\nValue of Y is : %0.2f", y);
    
    return 0;
}