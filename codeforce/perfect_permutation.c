/**
 * @file perfect_permutation.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-19
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/233/A
 * 
 */

#include<stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    if ( n%2== 1 ) {
        printf("-1\n");
    }
    else {
        printf("2 1");
        for ( i=3; i<n; i=i+2 ) {
            printf(" %d %d", i+1, i);
        }
    }
    return 0;
}