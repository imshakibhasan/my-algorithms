/**
 * @file icpc_ballons.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1703/problem/B
 */
#include<stdio.h>
int main() {
    int t, n, i, j, k, count = 0, ballon;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        count = 0;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        if (n == 1) {
            printf("2\n");
        }
        else {
            for (j = 0; j < n-1; j++) {
                for (k = j+1; k < n; k++) {
                    if (str[j] == str[k]) {
                        count++;
                        break;
                    }
                }
            }
            printf("%d\n", ((n-count)*2) + count);
        }
    }
    return 0;
}