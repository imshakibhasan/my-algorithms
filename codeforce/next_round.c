/**
 * @file next_round.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-17
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/158/A
 * 
 */

#include<stdio.h>
int main() {
    int n, k , i, j, count=0; 
    scanf("%d%d", &n, &k);
    int arr[n];
    for ( i=0; i<n; i++ ) {
        scanf("%d", &arr[i]);
    }
    for ( i=0; i<n; i++ ) {
        if ( arr[i]>0 ) {
            if ( arr[k-1] <= arr[i] ) {
                count++;
            }
        }    
    }
    printf("%d", count);
    return 0;
}