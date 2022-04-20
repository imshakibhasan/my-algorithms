/**
 * @file magical_sticks.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://codeforces.com/problemset/problem/1371/A
 * 
 */
#include<stdio.h>
int main() {
    int i, t, r, p;
    scanf("%d", &t);
    p = t;
    int a[t];
    int ans[p];
    for ( i=0; i<t; i++ ) {
        scanf("%d", &a[i]);
    }
    for ( i=0; i<t; i++ ) {
        r = (a[i]+1)/2;
        ans[i]=r;
    }
    for ( i=0; i<p; i++ ) {
        printf("%d\n", ans[i]);
    }
    return 0;
}