/**
 * @file rakibs_problem_Number_pattern.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
int main() {
    int i , j, k;

    for ( i=1; i<=5; i++ ) {
        for ( j=1; j<=i; j++ ) {
            printf("%d", j);
        }
        printf(" ");
        for ( k=i; k>=1; k-- ) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}