/**
 * @file spy_detected.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-24
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1512/A
 */
#include<stdio.h>
int main() {
    int t, n, i, j, position;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        int arr[n];
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[n]);
        }
        for (j = 0; j < n ; j++) {
            if (arr[j] != arr[j+1]) {
                printf("%d\n", j+2);
                //continue;
                break;
            }
           // else {
                //if (j == 0 || j == 1) {
                //    if (arr[j] == arr[j+2]) {
                //        printf("%d\n", j+2);
                //    }
                //    else if (arr[j+1] == arr[j+2]) {
                 //       printf("%d\n", j+1);
                //    }
                //}
                //else {
                 //   printf("%d\n", j+2);
                 //   break;
                //}
           // }
        }
    }
    return 0;
}