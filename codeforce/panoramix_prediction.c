/**
 * @file panoramix_prediction.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-02
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/80/A
 */
#include<stdio.h>
int main() {
    int n, m, i, flag = 0;
    scanf("%d%d", &n, &m);
    for (i = 2; i <= m/2; i++) {
        if (m % i == 0) {
            printf("NO\n");
            flag++;
            break;
        }
    }
    if (flag == 0) {
        if ( (m - n) == 1 || (m - n) == 2 || (m - n) == 4) {
            if ( n == 3 && m == 7) {
                printf("NO");
            }
            else {
                printf("YES");
            }
        }
        else if ( (m - n) == 6) {
            if ( (n == 23 && m == 29) || (n == 31 && m == 37)) {
                printf("YES");
            }
            else {
                printf("NO");
            }
        }
        else {
            printf("NO");
        }
    }
    return 0;
}