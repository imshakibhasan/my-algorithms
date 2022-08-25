/**
 * @file three_doors.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-19
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/1709/A#:~:text=Problem%20%2D%201709A%20%2D%20Codeforces&text=There%20are%20three%20doors%20in,keys%20%E2%80%94%20one%20for%20each%20door.
 * 
 */

#include<stdio.h>
int main() {
    int t, n, i, j, count;
    scanf("%d", &t);
    for ( i=0; i<t; i++ ) {
        scanf("%d", &n);
        int arr[3];
        count = 0;
        for ( j=0; j<3; j++ ) {
            scanf("%d", &arr[j]);
        }
        for ( j=0; j<3; j++ ) {
            if ( arr[n-1] != 0 ) {
                n = arr[n-1];
                count++;
            }
        }
        if ( count >= 2 ) {
            printf("YES\n");
        }
        else { 
            printf("NO\n");
        }
    }
    return 0;
}