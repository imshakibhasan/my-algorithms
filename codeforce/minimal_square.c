/**
 * @file minimal_square.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-23
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1360/A
 */
#include<stdio.h>
int main() {
    int i, t, a, b, res;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d%d", &a, &b);
        if (a < b) {
            res = a;
            a = b;
            b = res; 
        }
        b = (2*b);
        if (a > b) {
            printf("%d\n", a*a);
        }
        else {
            printf("%d\n", b*b);
        }
    }
    return 0;
}