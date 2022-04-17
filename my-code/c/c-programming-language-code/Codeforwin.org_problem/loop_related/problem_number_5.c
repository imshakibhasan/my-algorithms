#include <stdio.h>
int main() {
    double length, breadth, area;
    
    printf("\nEnter The Length of The Rectangle : ");
    scanf("%lf", &length);
    
    printf("\nEnter The Breadth of The Rectangle : ");
    scanf("%lf", & breadth);
    
    area = length * breadth;
    printf("\nArea of The Rectangle is : %.2lf", area);
    
    return 0;
}