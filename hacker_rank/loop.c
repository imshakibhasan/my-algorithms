/**
 * @file loop.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-18
 * 
 * @copyright Copyright (c) 2022
 * problem: https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
 * 
 */

#include<stdio.h>
int main() 
{
    int i, a, b;
    scanf("%d%d", &a, &b);
  	// Complete the code.
      
    for ( i=a; i<=b ; i++) {
        if ( i >= 1 && i <=9) {
            if (i==1) {
            printf("one\n");
            }
            if (i==2) {
            printf("two\n");
            }
            if (i==3) {
            printf("three\n");
            }
            if (i==4) {
            printf("four\n");
            }
            if (i==5) {
            printf("five\n");
            }
            if (i==6) {
            printf("six\n");
            }
            if (i==7) {
            printf("seven\n");
            }
            if (i==8) {
            printf("eight\n");
            }
            if ( i==9 ) {
            printf("nine\n");
            }
        
        }
        else {
            if(i%2==0) {
                printf("even\n");
            }
            else {
                printf("odd\n");
            }
        }
    }
    return 0;
}


