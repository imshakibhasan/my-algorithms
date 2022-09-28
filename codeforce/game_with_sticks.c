/**
 * @file game_with_sticks.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-29
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/451/A
 */

#include<stdio.h>
int main() {
    int n, m, intersection;
    scanf("%d%d", &n, &m);
    if (n < m) {
        intersection = n;
    }
    else {
        intersection = m;
    }
    if ( intersection % 2 == 0) {
        printf("Malvika");
    }
    else {
        printf("Akshat");
    }
    return 0;
}