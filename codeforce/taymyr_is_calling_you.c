/**
 * @file taymyr_is_calling_you.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-07
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/764/A
 */
#include <stdio.h>
int main () {
    int m,n,z,i,j,count;
    scanf("%d%d%d", &m, &n, &z);
    count = 0;
    for (i=m; i<=z; i+=m) {
        for (j = n; j <= i; j+=n) {
            if (i == j) {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}