/**
 * @file minimum_maximum.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-13
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforwin.org/2016/02/c-program-to-find-maximum-and-minimum-using-functions.html
 * 
 */


#include<stdio.h>

void mini_maxi(float a, float b);

int main() {
    float a, b;
    printf("\nPlease Enter 2 Numbers To Find Maximum And Minimum____");
    printf("\nEnter a number : ");
    scanf("%f", &a);
    printf("\nEnter another number : ");
    scanf("%f", &b);
    mini_maxi(a,b);
    return 0;
}

void mini_maxi(float a, float b) {
    if ( a==b ) {
        printf("\nThe Input Numbers Are Equal.");
    }
    else if ( a> b) {
        printf("Maximum Value is = %g\nMinimum Value is = %g\n", a,b);
    }
    else {
        printf("Maximum Value is = %g\nMinimum Value is = %g\n", b,a);
    }
}

