/**
 * @file team.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-13
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/231/A
 * 
 */
#include<stdio.h>
int main() {
    int i, n, p, v, t, r, count=0;
    char ch;
    scanf("%d", &n);
    int res[n];
    for(i=0; i<n; i++) {
        scanf("%d%c%d%c%d", &p,&ch,&v, &ch, &t);
        r = p+v+t;
        res[i]=r;
    }
    for( i=0; i<n; i++ ) {
        if( res[i]> 1 ) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
