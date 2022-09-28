/**
 * @file domino_piling.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/50/A
 */
#include<stdio.h>
int main() {
    int m, n, res;
    scanf("%d%d", &m, &n);
    res = (m*n)/2;
    printf("%d", res);
    return 0;
}