/**
 * @file vasya_and_hepster.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-05
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/581/A
 */
#include<stdio.h>
int main() {
    int a, b, r;
    scanf("%d%d", &a, &b);
    if (a == b) {
        printf("%d 0", a);
    }
    else if (a > b) {
        printf("%d %d", b, (a-b)/2);
    }
    else {
        printf("%d %d", a, (b-a)/2);
    }
    return 0;
}
