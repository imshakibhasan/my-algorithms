/**
 * @file mark_the_photographer.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-19
 * 
 * @copyright Copyright (c) 2022
 * problem:https://codeforces.com/problemset/problem/1705/A
 */

#include<stdio.h>
int main() {
    int t, n, x, i, j, k, temp, flag, count;
    scanf("%d", &t);
    for ( i=0; i<t; i++ ) {
        scanf("%d%d", &n, &x);
        int arr[(2*n)];
        for( j=0; j<(2*n); j++ ) {
            scanf("%d", &arr[j]);
        }
        if ( n==1 ) {
            if ( arr[0] - arr[1] >= x || arr[1] - arr[0] ) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
        else  {
            for ( j=0; j<(2*n)-1; j++ ) {
                flag = 0;
                for ( k=0; k<(2*n)-1-i; k++ ) {
                    if ( arr[k]>arr[k+1] ) {
                        temp = arr[k];
                        arr[k] = arr[k+1];
                        arr[k+1] = temp;
                        flag = 1;
                    }
                }
                if ( flag == 0 ) {
                    break;
                }
            }
            count = 0;
            for ( j=0; j<n; j++ ) {
                if ( arr[n+j] - arr[j] >= x ) {
                count++;
                }
            }
            if ( count == n ) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
    }
    return 0;
}