/**
 * @file array_with_odd_sum.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-15
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1296/problem/A
 */
#include<stdio.h>
int main() {
    int t, n, i, j, count_odd, count_even;
    scanf("%d", &t); 
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        int arr[n];
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            if (arr[j]%2==0) {
                count_even++;
            }
            else {
                count_odd++;
            }
        }
        if (count_even == n) {
            printf("NO\n");
        }
        else if (count_odd == n) {
            if (n%2 == 0) {
                printf("No\n");
            }
            else {
                printf("YES\n");
            }
        }
        else if (count_even == count_odd || count_even != count_odd) {
            printf("YES\n");
        }
        count_even = 0; 
        count_odd = 0;
    }
    return 0;
}