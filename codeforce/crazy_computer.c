/**
 * @file crazy_computer.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/716/A
 */
#include<stdio.h>
int main() {
    int n, c, i, count = 1;
    scanf("%d%d", &n, &c);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i > 0) {
            if ((arr[i] - arr[i-1]) <= c) {
                count++;
            }
            else {
                count = 1;
            }
        }
    }
    printf("%d", count);
    return 0;
}