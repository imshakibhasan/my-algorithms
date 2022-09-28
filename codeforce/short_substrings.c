/**
 * @file short_substrings.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-20
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1367/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int t, i, j, length = 0;
    char str[101];
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%s", str);
        length = strlen(str);
        if (length == 2) {
            printf("%s\n", str);
        }
        else {
            for (j = 0; j < length-1; j++) {
                if (j % 2 != 0) {
                    continue;
                }
                else {
                    printf("%c", str[j]);
                }
            }
            printf("%c", str[length-1]);
            printf("\n");
        }
    }
    return 0;
}