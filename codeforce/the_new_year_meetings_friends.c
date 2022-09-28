/**
 * @file the_new_year_meetings_friends.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-20
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/723/A
 */
#include<stdio.h>
int main() {
    int i, max = 1, min = 100, mid = 0, sum = 0, a[3];
    for (i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("%d", ((sum-(max+min)) - min) + max - (sum-(max+min)));
    return 0;
}