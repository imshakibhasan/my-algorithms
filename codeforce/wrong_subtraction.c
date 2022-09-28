/**
 * @file wrong_subtraction.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-16
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/977/A
 */
#include<stdio.h>
int main() {
    int i, n, k, value, res;
    scanf("%d%d", &n, &k);
    //value = n;
    for (i = 0; i < k; i++) {
        value = n;
        value = value % 10;
        if (value != 0) {
            n = n - 1;
        }
        else {
            n = n / 10;
        }
    }
    printf("%d", n);
    return 0;
}