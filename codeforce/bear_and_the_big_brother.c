/**
 * @file bear_and_the_big_brother.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-16
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/791/A
 */
#include<stdio.h>
int main() {
    int a, b, count = 0;
    scanf("%d%d", &a, &b);
    while (a <= b) {
        a = a * 3;
        b = b + b;
        count++;
    }
    printf("%d", count);
    return 0;
}