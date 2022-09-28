/**
 * @file compote.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-11
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/746/A
 */
#include<stdio.h>
int main() {
    int a, b, c, i, flag = 0;
    scanf("%d%d%d", &a, &b, &c);
    for (i = a; i > 0; i--) {
        if ( b - (i*2) >= 0 && c - (i*4) >=0 ) {
            printf("%d", (i*1) + (i*2) + (i*4));
            flag++;
            break;
        }
    }
    if (flag == 0) {
        printf("0");
    }
    return 0;
}