/**
 * @file rakib_hasan's_loghtoj_problem.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: Rakib's Lightoj Question
 * 
 */
#include<stdio.h>
int main() {
    int i, j=0, t, result;
    scanf("%d", &t);
    int a[(2*t)];
    for ( i=0; i<(2*t); i++ ) {
        scanf("%d", &a[i]);
    }
    for ( i=0; i<(2*t); i=i+2 ) {
        result = a[i] + a[i+1];
        j++;
        printf("Case %d: %d\n", j, result);
    }
    return 0;
}