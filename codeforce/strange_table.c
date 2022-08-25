/**
 * @file strange_table.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/1506/A
 * 
 */

#include<stdio.h>
#include<math.h>
int main() {
    int t, x, k, i, r1, j;
    double n, m, r;
    scanf("%d", &t);
    int res[t];
    for ( k=0; k<t; k++ ) {
        scanf("%lf%lf%d", &n, &m, &x);
        r = x/n; 
        j = ceil(r);
        r1 = floor(r);
        i = x - (r1*n);
        if ( i ==0 ) {
            i=n;
        }
        res[k] = (((i-1)*m) + j);
    }

    for ( i=0; i<t; i++ ) {
        printf("%d\n", res[i]);
    }
    return 0;
}
