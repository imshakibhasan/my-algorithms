/**
 * @file plus_one_on_the_subset.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-15
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/1624/A
 * 
 */
#include<stdio.h>
int main() {
    int i, j, k, n, p, highest, lowest;
    scanf("%d", &n);
    int ans[n];
    for ( i=0; i<n; i++ ) {
        scanf("%d", &p);
        int arr_i_[p];
        for ( j=0; j<p; j++) {
            scanf("%d", &arr_i_[j]); 
        }
        highest = arr_i_[0];
        lowest = arr_i_[0];
        for (k=1; k<p; k++) {
            if ( highest < arr_i_[k] ) {
                highest = arr_i_[k];
            }
        }
        for ( k=1; k<p; k++) {
            if ( lowest > arr_i_[k] ) {
                lowest = arr_i_[k];
            }
        }
        ans[i]=highest - lowest;
    }
    for ( i=0; i<n; i++ )
    {
        printf("%d\n", ans[i]);
    }

    return 0;
}