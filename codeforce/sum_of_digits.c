/**
 * @file sum_of_digits.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-01
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/contest/102/problem/B
 */
#include<stdio.h>
#include<string.h>
int main() {
    int length;
    char str[1000000*1000000*1000000*1000000*1000000*1000000*1000000*1000000*1000000*1000000];
    scanf("%s", str);
    length = strlen(str);
    printf("%d", length);
    return 0;
}