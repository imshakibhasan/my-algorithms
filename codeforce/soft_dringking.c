/**
 * @file soft_dringking.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-28
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/151/A
 */
#include<stdio.h>
int main() {
    int i, drink, limes, salt, min, arr[8];
    for (i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }
    drink = (arr[1] * arr[2]) / arr[6];
    limes = arr[3] * arr[4];
    salt = arr[5] / arr[7];
    if (drink > limes ) {
        min = limes;
    }
    else {
        min = drink;
    }
    if (min > salt) {
        min = salt;
    }
    printf("%d", min/arr[0]);
    return 0;
}