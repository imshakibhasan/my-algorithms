/**
 * @file fashionablee.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-26
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1369/A
 */
#include<stdio.h>
int main() {
    int t, n, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        if (n % 4 == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}