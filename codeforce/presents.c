/**
 * @file presents.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-30
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/136/A
 */
#include<stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (j = 1; j <= n; j++) {
        for (i = 0; i < n; i++) {
            if (arr[i] == j) {
                printf("%d ", i+1);
            }
        }
    }
    return 0;
}