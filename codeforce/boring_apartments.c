/**
 * @file boring_apartments.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-25
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1433/A
 */
#include<stdio.h>
int main() {
    int t, x, i, count, r, p = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        count = 0;
        p = 0;
        scanf("%d", &x);
        r = x % 10;
        count = (r-1) * 10;
        while(x > 0) {
            x = x / 10;
            p++;
        }
        for (int j = 1; j <= p; j++) {
            count = count + j;
        }
        printf("%d\n", count);
    }
    return 0;
}