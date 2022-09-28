/**
 * @file drinks.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/200/B
 */
#include<stdio.h>
int main() {
    int i, n, n1;
    long double sum = 0;
    scanf("%d", &n); 
    for (i = 0; i < n; i++) {
        scanf("%d", &n1);
        sum = sum + n1;
    }
    printf("%.14Lf", sum/n);
    return 0;
}