/**
 * @file translation.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/41/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    char s1[101], s2[101], la;
    int i, length;
    scanf("%s%s", s1, s2);
    length = strlen(s1);
    if ( length == 1) {
        if (strcmp(s1,s2) == 0) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else {
        for (i = 0; i < length/2; i++) {
            la = s1[i];
            s1[i] = s1[length - 1 - i];
            s1[length-1-i] = la;
        }
        if (strcmp(s1, s2) == 0) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    return 0;
}
