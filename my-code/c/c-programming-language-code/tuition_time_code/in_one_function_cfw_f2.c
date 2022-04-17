#include<stdio.h>
double cal_dia_circum_area(float r);  // function declaration Or prototype
int main() {
    float r;
    printf("\nPlease Enter Radious Of The Circle : ");
    scanf("%f", &r);
    cal_dia_circum_area(r); // function call
    return 0;
}

// function definition
double cal_dia_circum_area(float r) {
    printf("Diameter = %.2f\nCircumference = %.2f\nArea = %.2f", (2*r),(2*3.1416*r),(3.1416*r*r));
    return 0;
}
