/**
 * @file i_love_%username%.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-23
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/155/A
 * 
 */

#include<stdio.h>
int main() {
    int n, i, max, min, count=0;
    scanf("%d", &n);
    int arr[n];
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            count++;
        }
        if (arr[i] < min) {
            min = arr[i];
            count++;
        }
    }
    printf("%d", count);
    return 0;
}