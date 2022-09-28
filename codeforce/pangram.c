/**
 * @file pangram.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-19
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/520/A
 */
#include<stdio.h>
int main() {
    int n, i, j, count = 0, flag = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    if (n < 26) {
        printf("NO");
    }
    else {
        for (i = 0; i < n; i++) {
            if (str[i] < 97) {
                str[i] = 97 + (str[i] - 65);
            }
        }
        for (i = 0; i < n-1; i++) {
            for (j = i+1; j < n; j++) {
                if (str[i] == str[j]) {
                    count++;
                    break;
                }
            }
        }
        if (n - count == 26) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    return 0;
}