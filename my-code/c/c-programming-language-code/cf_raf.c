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

/*#include<stdio.h>
int main() {
    int i, j, k, n, p, highest, lowest, mini_operation;
    scanf("%d", &n);
    for ( i=1; i<=n; i++ ) {
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
        mini_operation = highest - lowest;
        printf("%d\n", mini_operation);
    }
    return 0;
}
*/

#include<stdio.h>
int main() {
    int i, j, n, highest, lowest, a[6];
    for ( i=0; i<6; i++ ) {
        scanf("%d", &a[i]);
    }
    highest = a[0];
    for ( i=1; i<6; i++ ) {
        if ( highest< a[i] ) {
            highest = a[i];
        }
    }
    printf("%d\t", highest);
    lowest = a[0];
    for ( i=1; i<6; i++ ) {
    if ( lowest> a[i] ) {
        lowest = a[i];
        }
    }
    printf("%d\t", lowest);
    n = highest - lowest;
    printf("%d", n);
    return 0;
}