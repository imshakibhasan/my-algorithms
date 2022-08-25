/**
 * @file good_matrix_elements.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/177/A1
 * 
 */

#include<stdio.h>
int main() {
    int i, j, n, sum = 0;
    scanf("%d", &n);
    int  arr[n][n];
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<n; j++ ) {
            scanf("%d", &arr[i][j]);
            if ( i==j || i==(n-1)/2 || j==(n-1)/2 || j== n-1-i ) {
                sum = sum + arr[i][j]; 
            }
        }
        
    }
    printf("%d", sum);
    return 0;
}