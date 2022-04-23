/**
 * @file elections.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-22
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem:  https://codeforces.com/problemset/problem/1593/A
 * 
 */
#include<stdio.h>
int main() {
    int i, j, k, l, m, t, max, result;
    scanf("%d", &t);
    int a[(3*t)];
    for ( i=0; i<(3*t); i++ ) {
        scanf("%d", &a[i]);
    }
    for ( j=0; j<(3*t); j= j+3 ) {
        if ( ((a[j]==a[j+1])&& a[j]>a[j+2]) || ((a[j]==a[j+2])&& a[j]>a[j+1]) || ((a[j+1]==a[j+2])&& a[j+1]>a[j]) ) {
            max = a[j];
            for ( m=j+1; m<j+3; m++ ) {
                if ( max<a[m] ) {
                    max = a[m];
                }
            }
            for ( l=j; l<(j+3); l++ ) {
                result = 0;
                result = max - a[l];
                if ( result!=0 ) {
                    result++;
                    a[l]=result;
                }
                else {
                    a[l]=1;
                }
            }
        }
        else if ( a[j]==a[j+1] && a[j]==a[j+2] ) {
            a[j]=1;
            a[j+1]=1;
            a[j+2] =1;
        }
        else {
            max = a[j];
            for ( m=j+1; m<j+3; m++ ) {
                if ( max<a[m] ) {
                    max = a[m];
                }
            }
            for ( l=j; l<(j+3); l++ ) {
                result = 0;
                result = max - a[l];
                if ( result!=0 ) {
                    result++;
                    a[l]=result;
                }
                else {
                    a[l]=result;
                }
            }
        }
    }
    for ( k=0; k<(3*t); k=k+3 ) {
        printf("%d %d %d\n", a[k], a[k+1], a[k+2]);
    }
    return 0;
}
