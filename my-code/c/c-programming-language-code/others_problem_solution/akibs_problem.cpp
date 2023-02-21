/**
 * @file akibs_problem.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#include<math.h>
int main() {
    double x, a, b, c, p, f = 0;
    printf("Please enter value of x__\n");
    scanf("%lf", &x);
    f = (5*sqrt(x))+ pow((x+2), 4) -(3*(sin(x/5.0)));
    printf("\nThe value of f(x) = %lf\n", f);
}

//Another Process
/*
#include<stdio.h>
#include<math.h>
int main() {
    double x, a, b, c, p, f = 0;
    printf("Please enter value of x__\n");
    scanf("%lf", &x);
    a = sqrt(x);
    
    b = pow((x+2), 4);
    
    p = x / 5.0;
    
    c = sin(p);
    
    f = (5 * a) + b - (3 * c);
    
    printf("\nThe value of f(x) = %lf\n", f);
}

*/