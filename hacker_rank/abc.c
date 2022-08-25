/**
 * @file abc.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-19
 * 
 * @copyright Copyright (c) 2022
 * problem : https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=true
 * 
 */
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if ( n<=9 ) {
        if ( n==1 ) {
            printf("one");
        }
        if ( n==2 ) {
            printf("two");
        }
        if ( n==3 ) {
            printf("three");
        }
        if ( n==4 ) {
            printf("four");
        }
        if ( n==5 ) {
            printf("five");
        }
        if ( n==6 ) {
            printf("six");
        }
        if ( n==7 ) {
            printf("seven");
        }
        if ( n==8 ) {
            printf("eight");
        }
        if ( n==9 ) {
            printf("nine");
        }
    }
    else {
        printf("Greater than 9");
    }
    return 0;
}