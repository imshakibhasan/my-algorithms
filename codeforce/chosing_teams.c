/**
 * @file chosing_teams.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-28
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/432/A
 */
#include<stdio.h>
int main() {
    int n, x, k, i, count = 0;
    scanf("%d%d", &n, &k);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x <= (5-k)) {
            count++;
        }
    }
    printf("%d", count/3);
    return 0;
}