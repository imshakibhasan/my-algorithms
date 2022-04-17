/**
 * @file chocolate_distribution.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/1335/A
 * 
 */

#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i=0, arr[n];
    for ( i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for ( i=0; i<n; i++) {
        if ( arr[i]==1 || arr[i]==2 ) {
            printf("0\n");
         }
        else if ( arr[i]%2==0 ) {
            printf("%d\n", ((arr[i]-2)/2));
         }
         else {
            printf("%d\n", ((arr[i]-1)/2));
        }
    }

    return 0;
}