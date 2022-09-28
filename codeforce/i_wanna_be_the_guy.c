/**
 * @file i_wanna_be_the_guy.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/469/A
 */
#include<stdio.h>
int main() {
    int n, i, j, count = 0, p1, p2;
    scanf("%d", &n);
    scanf("%d", &p1);
    int a[p1];
    for (i = 0; i < p1; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &p2);
    int b[p2];
    for (i = 0; i < p2; i++) {
        scanf("%d", &b[i]);
    }
    int res[p1+p2];
    for (i = 0; i < p1; i++) {
        res[i] = a[i];
    }
    for (i = 0; i < p2; i++) {
        res[p1+i] = b[i];
    }
    for (i = 1; i <= n; i++) {
        for (j = 0; j < (p1+p2); j++) {
            if (i == res[j]) {
                count++;
                break;
            }
        }
    }
    if (count == n) {
        printf("I become the guy.");
    }
    else {
        printf("Oh, my keyboard!");
    }
    return 0;
}