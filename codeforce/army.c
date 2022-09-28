/**
 * @file army.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/38/A
 */

#include<stdio.h>
int main() {
    int i, n, a, b, year=0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d%d", &a, &b);
    for (i = a - 1; i < b - 1; i++) {
        year = year + arr[i];
    }
    printf("%d", year);
    return 0;
}