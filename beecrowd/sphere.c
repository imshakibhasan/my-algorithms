/**
 * @file sphere.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
int main() {
    double R, VOLUME;
    scanf("%lf", &R);
    VOLUME = (4.0/3)*3.14159*R*R*R;
    printf("VOLUME = %.3lf\n", VOLUME);
    return 0;
}