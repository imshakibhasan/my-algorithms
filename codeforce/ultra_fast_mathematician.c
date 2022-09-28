/**
 * @file ultra_fast_mathematician.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/61/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int length, i;
    char s1[101], s2[101];
    scanf("%s%s", s1, s2);
    length = strlen(s1);
    for (i = 0; i < length; i++) {
        if(s1[i] == s2[i]) {
            printf("0");
        }
        else {
            printf("1");
        }
    }
    return 0;
}