/**
 * @file reconnaissance.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-24
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/32/A
 */
#include<stdio.h>
int main() {
    int n, d, i, j, count = 0;
    scanf("%d%d", &n, &d);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            if (arr[i] > arr[j]) {
                if (arr[i] - arr[j] <= d) {
                    count++;
                }
            }
            else {
                if (arr[j] - arr[i] <= d) {
                    count++;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}