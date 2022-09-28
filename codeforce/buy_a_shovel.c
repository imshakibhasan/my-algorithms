/**
 * @file buy_a_shovel.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-12
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/732/A
 */
#include<stdio.h>
int main() {
    int k, r, last_digit, value = 0, count = 1;
    printf("\nPlease Enter Shovel price tk..");
    scanf("%d", &k);
    printf("\nPlease Enter tk..");
    scanf("%d", &r);
    value = k;
    last_digit = k%10;
    while (r != last_digit) {
        value = value + k;
        count++;
        last_digit = value % 10;
    }
    printf("%d", count);
    return 0;
}