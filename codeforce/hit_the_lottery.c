/**
 * @file hit_the_lottery.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-24
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/996/A
 */
#include<stdio.h>
int main() {
    int n, r, count = 0;
    scanf("%d", &n);
    if (n >= 100) {
        r = n / 100;
        n = n % 100;
        count = count + r;
    }
    if (n >= 20) {
        r = n / 20;
        n = n % 20;
        count = count + r;
    }
    if ( n >= 10) {
        r = n / 10;
        n = n % 10;
        count = count + r;
    }
    if (n >= 5) {
        r = n / 5;
        n = n % 5;
        count = count + r;
    }
    if (n < 5) {
        count = count + n;
    }
    printf("%d", count);
    return 0;
}