/**
 * @file division.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-20
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1669/A
 */
#include<stdio.h>
int main() {
    int t, i, n;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        if ( n >= 1900) {
            printf("Division 1\n");
        }
        else if (n >= 1600 && n <= 1899) {
            printf("Division 2\n");
        }
        else if (n >= 1400 && n <= 1599) {
            printf("Division 3\n");
        }
        else {
            printf("Division 4\n");
        }
    }
    return 0;
}