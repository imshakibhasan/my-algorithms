/**
 * @file floor_number.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-25
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/1426/A
 */
/* #include<stdio.h>
int main() {
    int i, j, t, n, x, count = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        count = 0;
        scanf("%d%d", &n, &x);
        n = n - 2;
        if (n < 0) {
            printf("1\n");
            continue;
        }
        while (n > 0) {
            n = n - x;
            count++;
        }
        printf("%d\n", count+1);
    }
    return 0;
} */

#include<stdio.h>
#include<math.h>
int main() {
    int i, t, res;
    double n, x;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%lf%lf", &n, &x);
        n = n - 2;
        if (n < 0) {
            printf("1\n");
            continue;
        }
        else {
            double num = n / x;
            res = ceil(num);
            printf("%d\n", res+1);
        }
    }
    return 0;
}