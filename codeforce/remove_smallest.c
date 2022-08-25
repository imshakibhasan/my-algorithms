/**
 * @file remove_smallest.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-18
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/1399/A
 * 
 */

#include<stdio.h>
int main() {
    int t, n, i, j, k, count, temp;
    scanf("%d", &t);
    for ( i=0; i<t; i++ ) {
        scanf("%d", &n);
        int arr[n];
        count = 0;
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        for (j = 0; j < n-1; j++) {
            for (k = 0; k < n-1-j; k++) {
                if (arr[k] > arr[k+1]) {
                    temp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = temp;
                }
            }
        }
        for (j = 0; j < n-1; j++) {
            if (arr[j+1] - arr[j] <= 1) {
                count++;
            }
        }
        if (count == n-1) {
            printf("YES\n");
        }
        else { 
            printf("NO\n");
        }
    }
    return 0;
}
