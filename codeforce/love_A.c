/**
 * @file love_A.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-25
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1146/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int count_a = 0, length, i;
    char str[51];
    scanf("%s", str);
    length = strlen(str);
    for (i = 0; i < length; i++) {
        if (str[i] == 'a') {
            count_a++;
        }
    }
    if (count_a > length/2) {
        printf("%d", length);
    }
    else {
        printf("%d", (2 * count_a) - 1);
    }
    return 0;
}