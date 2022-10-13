/**
 * @file increasing.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1742/problem/B
 */
#include<stdio.h>
int main() {
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        long long int n, flag = 0;
        scanf("%lld", &n);
        long long int arr[n];
        for (int j = 0; j < n; j++) {
            scanf("%lld", &arr[j]);
        }
        for (int j = 0; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[j] == arr[k])  {
                    printf("NO\n");
                    flag++;
                    break;
                }
            }
            if (flag > 0) {
                break;
            }
        }
        if (flag == 0) {
            printf("YES\n");
        }
    }
    return 0;
}