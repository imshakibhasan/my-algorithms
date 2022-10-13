/**
 * @file funny_permutation.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-11
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1741/problem/B
 */
#include<stdio.h>
int main() {
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        if (n == 3) {
            printf("-1");
        }
        else {
            for (int j = 0; j < n/2; j++) {
                printf("%d ",n-j);
            }
            for (int j = 1; j <= n/2; j++) {
                printf("%d ", j);
            }
            if (n%2 != 0 ) {
                printf("%d", n/2 + 1);
            }
        }
        printf("\n");
    }
    return 0;
}