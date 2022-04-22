/**
 * @file odd_set.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://codeforces.com/problemset/problem/1542/A
 * 
 */
#include<stdio.h>
int main() {
    int i, j, k, t, p, even, odd;
    scanf("%d", &t);
    int ans[t];
    for ( i=0; i<t; i++ ) {
        scanf("%d", &p);
        int b_i_[(2*p)];
        for ( j=0; j<(2*p); j++ ) {
            scanf("%d", &b_i_[j]);
        }
        even = 0;
        odd = 0;
        for ( k=0; k<(2*p); k++ ) {
            if ( b_i_[k]%2==0 ) {
                even++;
            }
            else {
                odd++;
            }
        }
        if ( even==odd ) {
            ans[i] = 0; 
        }
        else {
            ans[i] = 1;
        }
    }
    for ( i=0; i<t; i++ ) {
        if ( ans[i]==0 ) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}