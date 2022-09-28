/**
 * @file holiday_of_equality.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-08
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/758/A
 */
#include<stdio.h>
int main() {
    int n, i, max = 0, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if ( arr[i] > max) {
            max = arr[i];
        }
    }
    for (i = 0; i < n; i++) {
        sum = sum + (max - arr[i]);
    }
    printf("%d", sum);
    return 0;
}