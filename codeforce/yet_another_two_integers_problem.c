/**
 * @file yet_another_.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-20
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1409/A
 */
#include<stdio.h>
int main() {
    int t, a, b, i, r;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d%d", &a, &b);
        if (a > b) {
            r = a - b;
            if (r % 10 == 0) {
            printf("%d\n", r/10);
            }
            else {
                printf("%d\n", (r/10)+1);
            }
        }
        else if (a == b) {
            printf("0\n");
        }
        else {
            r = b - a;
            if (r % 10 == 0) {
            printf("%d\n", r/10);
            }
            else {
                printf("%d\n", (r/10)+1);
            }
        }
    }
    return 0;
}