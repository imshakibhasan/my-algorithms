/**
 * @file ilya_and_bank_account.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-07
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/313/problem/A
 */
#include<stdio.h>
int main() {
    int n, n1, n2, r;
    scanf("%d", &n);
    if ( n > 0) {
        printf("%d", n);
    }
    else {
        n1 = n / 10;
        r = n % 10;
        n2 = n1 / 10;
        n2 = (n2*10) + r;
        if ( n1 > n2) {
            if (n1 > n) {
                printf("%d", n1);
            }
            else {
                printf("%d", n);
            }
        }
        else {
            if (n2 > n) {
                printf("%d", n2);
            }
            else {
                printf("%d", n);
            }
        }
    }
    return 0;
}