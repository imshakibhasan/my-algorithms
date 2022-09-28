/**
 * @file cheap_travel.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-31
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/466/A
 */
#include<stdio.h>
int main() {
    int n, m, a, b, r1, r2, r3;
    scanf("%d%d%d%d", &n, &m, &a, &b);
    r1 = ((n/m)*b)+((n%m)*a);
    r2 = (((n/m)+1)*b);
    r3 = n * a;
    if ( r2 < r1) {
        if ( r3 < r2) {
            printf("%d", r3);
        }
        else {
            printf("%d", r2);
        }
    }
    else if ( r3 < r1) {
        printf("%d", r3);
    }
    else {
        printf("%d", r1);
    }
    return 0;
}