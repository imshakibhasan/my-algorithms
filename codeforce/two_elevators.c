/**
 * @file two_elevators.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-16
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1729/problem/A
 */
#include<stdio.h>
int main() {
    int i, t, a, b, c, r1, r2;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d%d%d", &a, &b, &c);
        r1 = a - 1;
        if (b < c) {
            r2 = (c - b) + (c - 1);
        }
        else {
            r2 = b - 1;
        }
        if (r1 < r2) {
            printf("1\n");
        }
        else if (r1 == r2) {
            printf("3\n");
        }
        else {
            printf("2\n");
        }
    }
    return 0;
}