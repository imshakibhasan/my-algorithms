/**
 * @file soldier_and_bananas.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-17
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/546/A
 */
#include<stdio.h>
int main() {
    int k, n, w, i, res = 0;
    scanf("%d%d%d", &k, &n, &w);
    for (i = 1; i <= w; i++) {
        res = res + (k * i);
    }
    if (res > n) {
        printf("%d", res - n);
    }
    else  {
        printf("0");
    }
    return 0;
}