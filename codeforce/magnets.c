/**
 * @file magnets.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/344/A
 */
#include<stdio.h>
int main() {
    int n, i, count = 1, max = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n == 1) {
        printf("1");
    }
    else {
        for (i = 0; i < n-1; i++) {
            if (arr[i] == arr[i+1]) {
                continue;
            }
            else {
                count++;
            }
        }
        printf("%d", count);
    }
    return 0;
}