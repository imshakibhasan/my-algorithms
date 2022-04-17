#include<stdio.h>
int main() {
    
    float a1, b1, c1, a2, b2, c2, d, x, y;
    
    printf("\nEnter the First Equations x & y coefficent and equal value____");
    
    printf("\n a1 : ");
    scanf("%f", &a1);
    
    printf("\n b1 : ");
    scanf("%f", &b1);
    
    printf("\n c1 : ");
    scanf("%f", &c1);

    printf("\nEnter the second equation x & y coefficent and equal value___");
    
    printf("\n a2 : ");
    scanf("%f", &a2);
    
    printf("\n b2 : ");
    scanf("%f", &b2);
    
    printf("\n c2 : ");
    scanf("%f", &c2);

    d = (a1*b2 -a2*b1); 
    
    if ((int)d == 0) {
        printf("Value of x and y can not be determined");
    }
    else {
        x = (b2*c1 - b1*c2)/(a1*b2 -a2*b1);
    printf("\nValue of x is : %.2f", x);

    y = (a1*c2 - a2*c1)/ (a1*b2 - a2*b1);
    printf("\nValue of y is : %.2f", y);
    }
    return 0;
}