/**
 * @file collecting_coins.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-17
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://codeforces.com/problemset/problem/1294/A
 * 
 */
#include<stdio.h>
int main() {
    int i, j, k, n, highest, must, hbe, result;
    scanf("%d", &n);
    int ans[n];
    for ( i=0; i<n; i++ ) {
        highest = 0;
        must = 0;
        hbe = 0;
        int arr_i_[4];
        for ( j=0; j<4; j++) {
            scanf("%d", &arr_i_[j]);
        }
        highest = arr_i_[0];
        for (k=1; k<3; k++) {
            if ( highest < arr_i_[k] ) {
                highest = arr_i_[k];
            }
        }
        must = (highest - arr_i_[0]) + (highest - arr_i_[1]) + (highest - arr_i_[2]);
        hbe = (arr_i_[3]-must);
        if ( hbe>=0 ) {
            result = hbe%3;
            ans[i] = result;
        }
        else {
            ans[i] = 1;
        }
    }
    for ( i=0; i<n; i++ ) {
        if ( ans[i]==0 ) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
        
    }
    return 0;
}