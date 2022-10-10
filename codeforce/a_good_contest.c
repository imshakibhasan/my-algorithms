/**
 * @file a_good_contest.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/681/A
 */
#include<stdio.h>
int main() {
    int n, i, flag = 0;
    scanf("%d", &n);
    char str[11];
    int x, y;
    for (i = 0; i < n; i++) {
        scanf("%s%d%d", str, &x, &y);
        if (x >= 2400 && y > x) {
            flag++;
        }
    }
    if (flag > 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}