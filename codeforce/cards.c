/**
 * @file cards.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/701/A
 */
#include<stdio.h>
int main() {
    int n, i, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    int r = sum / (n/2);
    for (i = 0; i < n -1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == r) {
                arr[j] = 0;
                printf("%d %d\n", i+1, j+1);
                break;
            }
        }
    }
    return 0;
}