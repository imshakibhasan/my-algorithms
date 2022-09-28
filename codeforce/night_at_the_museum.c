/**
 * @file night_at_the_museum.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/731/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int length, i, sum = 0, res1, res2, pointer;
    char str[101];
    scanf("%s", str);
    length = strlen(str);
    pointer = 'a';
    for (i = 0; i < length; i++) {
        res1 = str[i] - pointer;
        if (res1<0) {
            res1 = -res1;
        }
        res2 = 26 - res1;
        if (res1 <= res2 ) {
            sum = sum + res1;
        }
        else {
            sum = sum + res2;
        }
        pointer = str[i];
    }
    printf("%d", sum);
    return 0;
}