/**
 * @file elephant.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/617/A
 * 
 */

#include<stdio.h>
int main() {
    int n, step;
    scanf("%d", &n);
    if( n%5==0 ) {
        step = n/5;
        printf("%d\n", step);
    }
    else {
        step= (n/5) +1;
        printf("%d", step);
    }
    return 0;
}