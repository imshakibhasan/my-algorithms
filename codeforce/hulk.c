/**
 * @file hulk.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/705/A
 */
#include<stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i == n) {
            if (i%2 == 0) {
                printf("I love it ");
            }
            else {
                printf("I hate it ");
            }
        }
        else if (i % 2 == 0) {
            printf("I love that ");
        }
        else {
            printf("I hate that ");
        }
    }
    return 0;
}