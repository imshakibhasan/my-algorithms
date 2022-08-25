/**
 * @file array_revarsal.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    int arr[n], res[n];
    for ( i=0; i<n; i++ ) {
        scanf("%d", &arr[i]);
        res[(n-1)-i] = arr[i];
    }
    for ( i=0; i<n; i++ ) {
        printf("%d ", res[i]);
    }
    return 0;
}