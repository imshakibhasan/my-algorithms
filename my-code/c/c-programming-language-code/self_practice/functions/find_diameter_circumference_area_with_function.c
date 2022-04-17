/**
 * @file find_diameter_circumference_area_with_function.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-13
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforwin.org/2016/02/c-program-to-find-diameter-circumference-and-area-of-circle-using-function.html
 * 
 */
#include<stdio.h>
double diameter( float r);
double circumference( float r);
double area(float r);
int main() {
    float d,c,a, r;
    printf("\nPlease Enter The Radious Of Circle : ");
    scanf("%f", &r);
    d = diameter(r);
    printf("Diameter Of The Circle = %.2f\n", d);

    c = circumference(r);
    printf("Circumference Of The Circle = %.2f\n", c);

    a = area(r);
    printf("Area Of The Circle = %.2f\n", a);

    return 0;
}
double diameter(float r) {
    return (2*r);
}
double circumference(float r) {
    return (2*3.1416*r);
}
double area(float r) {
    return (3.1416*r*r);
}