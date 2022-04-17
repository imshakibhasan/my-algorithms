/**
 * @file restoring_three_numbers.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-04-15
 *
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/1154/A
 *
 */
#include<stdio.h>
int main() {
    int i, j, c, a[4];
    for ( i=0; i<4; i++) {
        scanf("%d", &a[i]);
    }
    for ( i=0; i<4; i++) {
        for ( j=(i+1); j<4; j++) {
            if ( a[i] < a[j] ) {
                c = a[i];
                a[i] = a[j];
                a[j] = c; 
            }
        }
    }
    for ( i=1; i<4; i++) {
        printf("%d ", (a[0] - a[i]));
    }
    return 0;
}