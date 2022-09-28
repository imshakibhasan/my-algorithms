/**
 * @file arrival_of_the_general.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-30
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/144/A
 */
#include<stdio.h>
int main() {
    int i, n, max=0, min=100, max_p, min_p;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (max < arr[i]) {
            max = arr[i];
            max_p = i;
        }
        if (min >= arr[i]) {
            min = arr[i];
            min_p = i;
        }
    }
    if (max_p > min_p) {
        printf("%d", (max_p+(n-(min_p+2))));
    }
    else {
        printf("%d", max_p+(n-(min_p+1)));
    }
    return 0;
}