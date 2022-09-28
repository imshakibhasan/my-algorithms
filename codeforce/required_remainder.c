/**
 * @file required_remainder.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-07
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1374/problem/A
 */
#include<stdio.h>
int main() {
    int i, j=0, t;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        j = 0;
        int x, y, n, k, r;
        scanf("%d%d%d", &x, &y, &n);
        
        while(1) {
            r=n/x;
            if((r*x)+ y > n) {
                k=x*(r-j)+y;
                if(k<n) {
                    printf("%d\n", k);
                    break;
                }
                else {
                    j++;
                }
            }
            else {
                k=r*x + y ;
                printf("%d\n", k);
                break;
            }
        }
    }
    return 0;
}