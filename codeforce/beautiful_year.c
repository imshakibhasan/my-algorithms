/**
 * @file beautiful_year.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-16
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/271/A
 */
#include<stdio.h>
int main() {
    int i, y, a, b, c, d;
    scanf("%d", &y);
    while (1) {
        y += 1;
        a = y / 1000;
        b = y / 100 % 10;
        c = y / 10 % 10;
        d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    printf("%d", y);
    return 0;
}