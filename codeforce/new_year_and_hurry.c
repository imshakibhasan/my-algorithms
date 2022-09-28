/**
 * @file new_year_and_hurry.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-10
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/750/A
 */
#include<stdio.h>
int main() {
    int n, k, i, time, flag = 0;
    scanf("%d%d", &n, &k);
    time = 240 - k;
    if (time < 5) {
        printf("0");
        flag++;
    }
    else {
        for (i = 1; i <= n; i++) {
            time = time - (5*i);
            if (time >= 5*(i+1)) {
                continue;
            }
            else {
                printf("%d", i);
                flag++;
                break;
            }
        }
    }
    if (flag == 0) {
        printf("%d", n);
    }
    return 0;
}