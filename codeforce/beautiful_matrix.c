/**
 * @file beautiful_matrix.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-14
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/263/A
 */
#include<stdio.h>
#include<stdlib.h>
int main() {
    int i, j, k, l, arr[5][5], res;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1) {
                k = 3 - (i+1);
                k = abs(k);
                l = 3 - (j+1);
                l = abs(l);
                res = k + l;
            }
        }
    }
    printf("%d", res);
    return 0;
}