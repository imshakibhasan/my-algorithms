/**
 * @file little_artem_and_presents.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/669/A
 */
#include<stdio.h>
int main() {
    int n, r;
    scanf("%d", &n);
    if (n < 3) {
        printf("1");
    }
    else {
        if (n % 3 == 1 || n % 3 == 2) {
            printf("%d", ((n/3)*2)+1);
        }
        else {
            printf("%d", 2 * (n/3));
        }
    }
    return 0;
}