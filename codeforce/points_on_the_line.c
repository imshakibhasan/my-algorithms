/**
 * @file points_on_the_line.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-23
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/940/A
 */
#include<stdio.h>
int main() {
    int n, d, i, min = 101, count = 0;
    scanf("%d%d", &n, &d);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    for (i = 0; i < n; i++) {
        if (arr[i] - min > d) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}