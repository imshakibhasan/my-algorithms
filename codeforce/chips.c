/**
 * @file chips.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-02
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/92/A
 */
#include<stdio.h>
int main() {
    int n, m, r, i, sum=0;
    scanf("%d%d", &n, &m);
    sum = (n * (n + 1) )/2;
    if ( m > sum) {
        m = m % sum;
    }
    for (i = 1; i <= n+1; i++) {
        r = m;
        m = m - i;
        if ( m < 0) {
            printf("%d", r);
            break;
        }    
    }
    return 0;
}