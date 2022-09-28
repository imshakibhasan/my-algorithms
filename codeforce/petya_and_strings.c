/**
 * @file petya_and_strings.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-01
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/112/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    char s1[101], s2[101];
    int i, length, r;
    scanf("%s%s", s1,s2);
    length = strlen(s1);
    for (i = 0; i < length; i++) {
        if (s1[i] < 97) {
            s1[i] = 97 + (s1[i] - 65);
        }
        if (s2[i] < 97) {
            s2[i] = 97 + (s2[i] - 65);
        }
    }
    r = strcmp(s1, s2);
    if (r == 0) {
        printf("0");
    }
    else if (r < 0) {
        printf("-1");
    }
    else {
        printf("1");
    }
    return 0;
}
