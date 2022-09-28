/**
 * @file stones_on_the_table.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-15
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/266/A
 */
#include<stdio.h>
int main() {
    int i, n, count = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    for (i = 0; i < n-1; i++) {
        if (str[i] == str[i+1]) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}