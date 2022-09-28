/**
 * @file george_and_accommodation.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/467/A
 */
#include<stdio.h>
int main() {
    int n, i, count = 0;
    scanf("%d", &n);
    int arr[(2*n)];
    for (i = 0; i < (2*n); i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < (2*n)-1; i=i+2) {
        if (arr[i+1] - arr[i] >= 2) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}