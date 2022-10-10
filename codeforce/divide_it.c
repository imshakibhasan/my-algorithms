/**
 * @file divide_it.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1176/A
 */
#include<stdio.h>
int main() {
    int q, i;
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        long long int n;
        int count = 0, flag = 0;
        scanf("%lld", &n);
        while (n != 1) {
            if (n%2 == 0) {
                n = n /2;
                count++;
            }
            else {
                if (n % 3 == 0) {
                    n = (2 *n) / 3;
                    count++;
                }
                else if (n % 5 == 0) {
                    n = (4 * n) / 5;
                    count++;
                }
                else {
                    printf("-1\n");
                    flag++;
                    break;
                }
            }
        }
        if (flag == 0) {
            printf("%d\n", count);
        }
    }
    return 0;
}