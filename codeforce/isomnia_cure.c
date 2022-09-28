/**
 * @file isomnia_cure.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-28
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/148/A
 * 
 */
#include<stdio.h>
int main() {
    int i, k, l, m, n, d, count=0;
    scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);
    for (i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            count++;
        }
    }
    printf("%d", count);
}