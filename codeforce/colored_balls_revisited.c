/**
 * @file colored_balls_revisited.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-08
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1728/problem/A
 */
#include<stdio.h>
int main() {
    int t, i, n, j, max = 0, ball;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        int arr[n];
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            if (arr[j] > max) {
                max = arr[j];
                ball = j;
            }
        }
        printf("%d\n", ball+1);
        max = 0;
        ball = 0;
    }
    return 0;
}