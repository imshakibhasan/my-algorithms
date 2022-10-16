/**
 * @file even_array.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-15
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1367/B
 */
#include<stdio.h>
int main() {
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        int n, j, count_even = 0, count = 0;
        scanf("%d", &n);
        int arr[n];
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            if (arr[j] % 2 == 0) {
                count_even++;
            }
        }
        if (n % 2 == 0 && count_even == n / 2) {
            for (j = 0; j < n; j++) {
                if (j % 2 != arr[j] % 2) {
                    count++;
                }
            }
            printf("%d\n", count/2);
        }
        else if (n % 2 != 0 && count_even == n/2 + 1) {
            for (j = 0; j < n; j++) {
                if (j % 2 != arr[j] % 2) {
                    count++;
                }
            }
            printf("%d\n", count/2);
        }
        else {
            printf("-1\n");
        }
    }
    return 0;
}