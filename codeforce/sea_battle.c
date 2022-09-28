/**
 * @file sea_battle.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-28
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1131/A
 */
#include<stdio.h>
int main() {
    int w1, h1, w2, h2, height;
    scanf("%d%d%d%d", &w1, &h1, &w2, &h2);
    height = h1 + h2;
    printf("%d", (w1+2)*2 + (2*height));
    return 0;
}