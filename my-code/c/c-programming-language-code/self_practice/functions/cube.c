/**
 * @file cube.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-13
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforwin.org/2016/02/c-program-to-find-cube-of-number-using-function.html
 * 
 */
#include<stdio.h>
double cube(int n);
int main() {
    int n;
    double a;
    printf("\nPlease Enter An Integer Number To Find it's Cube : ");
    scanf("%d", &n);
    a = cube(n);
    printf("\n%d's Cube Value is = %.2f", n, a);
    return 0;
}
double cube(int n) {
    return (n*n*n);
}