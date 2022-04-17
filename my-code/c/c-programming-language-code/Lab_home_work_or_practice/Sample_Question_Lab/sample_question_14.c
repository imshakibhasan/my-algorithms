#include<stdio.h>
int main() {
    int radious;
    float pi, area, circumference;
    pi = 3.1416;
    printf("Enter Radious of a Circle(an integer number) : ");
    scanf("%d", &radious);

    area = pi*radious*radious;
    
    printf("\nArea of the Circle is : %0.2f", area);

    circumference = 2*pi*radious;
    
    printf("\nCircumference of the Circle is : %0.2f", circumference);
    return 0;
}