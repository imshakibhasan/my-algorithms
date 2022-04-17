/**
 * @file  divisibility_problem.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/1328/A
 * 
 */
#include<stdio.h>
int main() {
    int i=0, h, n, p, div, count;
    scanf("%d", &h);
    int a[2*h];
    for ( i=0; i<(2*h); i++) {
        scanf("%d", &a[i]);
    }
    for ( i=0; i<(2*h); i=i+2 ) {
        n = a[i];
        p = a[i+1];
        count = 0;
        if ( n%p==0 ) {
            printf("0\n");
        }
        else if ( n>p ) {
            div = (n/p)+1;
            count = (div*p - n );
            printf("%d\n", count);
        }
        else {
            count = p - n;
            printf("%d\n", count);
        }
    }
    return 0;
}