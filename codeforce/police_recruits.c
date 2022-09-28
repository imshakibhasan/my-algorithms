/**
 * @file police_recruits.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-28
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/427/A
 */
#include<stdio.h>
int main() {
    int n, x, i, police_need = 0, police = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > 0) {
            police = police + x;
        }
        else {
            if (police < 1) {
                police_need++;
            }
            else {
                police--;
            }
        }
    }
    printf("%d", police_need);
    return 0;
}