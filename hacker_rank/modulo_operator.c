/**
 * @file modulu_operator.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-18
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
 */

#include<stdio.h>
int main() {
    int n, sum=0, reminder;
    scanf("%d", &n);
    while ( n>0 ) {
        reminder = n%10;
        n = n/10;
        sum = sum + reminder;
    }
    printf("%d", sum);
    return 0;

}