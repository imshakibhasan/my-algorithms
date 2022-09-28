/**
 * @file balanced_array.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-26
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1343/B
 */
#include<stdio.h>
int main() {
    int t, n, i, j, p, sum = 0, count = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        sum = 0;
        count = 0;
        scanf("%d", &n);
        if ((n/2)%2 != 0) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
            for (j = 2; j <= n; j = j + 2) {
                printf("%d ", j);
                sum = sum + j;
                count++;
            }
            p = 1;
            for (j = 1; j < count; j++) {
                printf("%d ", p);
                sum = sum - p;
                p = p + 2;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}