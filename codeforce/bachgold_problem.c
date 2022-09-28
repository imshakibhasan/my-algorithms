/**
 * @file bachgold_problem.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-10
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/749/A
 */
#include<stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    printf("%d\n", n/2);
    if (n % 2 == 0) {
        for (i = 0; i < n/2; i++) {
            printf("2 ");
        }
    }
    else {
        for (i = 0; i < n/2-1; i++) {
            printf("2 ");
        }
        printf("3");
    }
    return 0;
}