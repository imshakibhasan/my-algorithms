#include<stdio.h>
int main() {
    int radious;
    float area,circumference;
    printf("\nEnter Radious of Circle : ");
    scanf("%d", &radious);

    //we know that "Area of Circle = 3.1416*r*r"
    
    area = 3.1416*radious*radious;
    printf("\nArea of the Circle is : %.2f", area);
    
    circumference = 2*3.1416*radious;
    printf("\nhCircumference of the Circle is : %.2f", circumference);
    return 0;
}