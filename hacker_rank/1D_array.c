/**
 * @file 1D_array.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem : https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true
 * 
 */
#include<stdio.h>
int main() {
    int n, sum=0;
    scanf("%d", &n);
    int arr[n];
    for ( int i=0; i<n; i++ ) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; 
    }
    printf("%d", sum);
    return 0;
}