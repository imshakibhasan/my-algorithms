/**
 * @file vanya_and_fence.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/677/A
 */
#include<stdio.h>
int main() {
    int n, h, i, width = 0;
    scanf("%d%d", &n, &h);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > h) {
            width = width + 2;
        }
        else {
            width++;
        }
    }
    printf("%d", width);
    return 0;
}