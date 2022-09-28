/**
 * @file file_name.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-19
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/978/problem/B
 */
#include<stdio.h>
int main() {
    int n, i, count = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    for (i = 0; i < n - 2; i++) {
        if (str[i] == 'x' && str[i+1] == 'x' && str[i+2] == 'x') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}