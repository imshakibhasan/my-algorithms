#include<stdio.h>
double cal_dia(float r);  //function declaration or prototype
double cal_circum(float r); //function declaration or prototype
double cal_area(float r); //function declaration or prototype
int main() {
    float r,d,c,a;
    printf("\nPlease Enter Radious Of The Circle : ");
    scanf("%f", &r);
    d = cal_dia(r);  // function call
    printf("\nDiameter = %.2f", d);

    c = cal_circum(r);  // function call
    printf("\nCircumference = %.2f", c);

    a = cal_area(r);  // function call
    printf("\nArea = %.2f", a);

    return 0;
}

// function definition
double cal_dia(float r) {
    return (2*r);
}

// function definition
double cal_circum(float r) {
    return (2*3.1416*r);
}

// function definition
double cal_area(float r) {
    return (3.1416*r*r);
}