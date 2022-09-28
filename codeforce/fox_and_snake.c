/**
 * @file fox_and_snake.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-28
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/510/A
 */
#include<stdio.h>
int main() {
    int n, m, i, j, p = 1;
    scanf("%d%d", &n, &m);
    char arr[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (i%2 == 0) {
                arr[i][j] = '#';
            }
            else {
                arr[i][j] = '.';
            }
        }
    }
    for (i = 1; i < n; i = i + 2)  {
        if (p%2 != 0) {
            arr[i][m-1] = '#';
            p++;
        }
        else {
            arr[i][0] = '#';
            p++;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}