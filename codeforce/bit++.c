/**
 * @file bit++.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/282/A
 */
#include<stdio.h>
int main() {
    int n, i, ans = 0;
    scanf("%d", &n);
    char s1[4];
    for (i = 0; i < n; i++) {
        scanf("%s", s1);
        if ((s1[0] == 'X' && s1[1] == '+' && s1[2] == '+') || (s1[0] == '+' && s1[1] == '+' && s1[2] == 'X' )) {
            ans++;
        }
        else {
            ans--;
        }
    }
    printf("%d", ans);
    return 0;
}