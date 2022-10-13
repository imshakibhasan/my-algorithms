/**
 * @file gifts_fixing.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1399/B
 */
#include<stdio.h>
int main() {
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        long long int n, j, ans = 0, min_a = 1000000000, min_b = 1000000000, p, q;
        scanf("%lld", &n);
        long long int a[n], b[n];
        for (j = 0; j < n; j++) {
            scanf("%lld", &a[j]);
            if (a[j] < min_a) {
                min_a = a[j];
            }
        }
        for (j = 0; j < n; j++) {
            scanf("%lld", &b[j]);
            if (b[j] < min_b) {
                min_b = b[j];
            }
        }
        for (j = 0; j < n; j++) {
            p = a[j] - min_a;
            q = b[j] - min_b;
            if (p > q) {
                ans = ans + p;
            }
            else {
                ans = ans + q;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}