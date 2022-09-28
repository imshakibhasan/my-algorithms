/**
 * @file Minimum_integer.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-23
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1101/A
 */
#include<stdio.h>
int main() {
    int t, i, j, l, r, d, res;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d%d%d", &l, &r, &d);
        if (d < l || d > r) {
            printf("%d\n", d);
            continue;
        }
        else {
            j = 1;
            while(1) {
                res = d * j;
                j++;
                if (res < l || res > r) {
                    printf("%d\n", res);
                    break;
                }
            }
        }
    }
    return 0;
}