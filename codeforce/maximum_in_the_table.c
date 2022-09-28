/**
 * @file maximum_in_the_table.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-28
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/509/A
 */
#include<stdio.h>
int main() {
    int i, j, n;
    scanf("%d", &n);
    int arr[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i==0 || j == 0) {
                arr[i][j] = 1;
            }
            else {
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }
    }
    printf("%d", arr[n-1][n-1]);
    return 0;    
}