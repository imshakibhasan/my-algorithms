/**
 * @file minutes_before_the_new_year.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-17
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://codeforces.com/problemset/problem/1283/A
 * 
 */
#include<stdio.h>
int main() {
    int i, n, ttl_min;
    scanf("%d", &n);
    int a[(n*2)];
    for ( i=0; i<(2*n); i++ ) {
        scanf("%d", &a[i]);
    }
    for ( i=0; i<(2*n); i=i+2 ) {
        ttl_min = 0;
        ttl_min = ((23-a[i])*60) + ( 60-a[i+1] );
        printf("%d\t", ttl_min);
    }
    return 0;
}