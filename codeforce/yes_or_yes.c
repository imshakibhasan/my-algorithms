/**
 * @file yes_or_yes.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-19
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1703/problem/A
 */
#include<stdio.h>
int main() {
    int n, i;
    char str[4];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", str);
        if ((str[0] == 'Y' || str[0] == 'y') && (str[1] == 'E' || str[1] == 'e') && (str[2] == 'S' || str[2] == 's')) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}