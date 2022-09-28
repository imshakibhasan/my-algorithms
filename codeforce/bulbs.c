/**
 * @file bulbs.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-28
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/615/A
 */
#include<stdio.h>
int main() {
    int n, m, i, x, y, count = 0, p = 1;
    scanf("%d%d", &n, &m);
    int res[m];
    for (i = 0; i < m; i++) {
        res[i] = p;
        p++;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        for (int j = 0; j < x; j++) {
            scanf("%d", &y);
            for (int k = 0; k < m; k++) {
                if (y == res[k]) {
                    res[k] = 0;
                }
            }
        }
    }
    for (i = 0; i < m; i++) {
        if (res[i] == 0) {
            count++;
        }
    }
    if (count == m) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}