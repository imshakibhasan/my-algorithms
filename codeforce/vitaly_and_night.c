/**
 * @file vitaly_and_night.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-28
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/595/A
 */
#include<stdio.h>
int main() {
    int n, m, i, r, x, y, count = 0;
    scanf("%d%d", &n, &m);
    r = n * m;
    for (i = 0; i < r; i++) {
        scanf("%d%d", &x, &y);
        if ( x == 1 || y == 1) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
