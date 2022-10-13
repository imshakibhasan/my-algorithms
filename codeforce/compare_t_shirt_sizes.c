/**
 * @file compare_t_shirt_sizes.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-11
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1741/problem/0
 */
#include<stdio.h>
#include<string.h>
int main () {
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        char s1[51], s2[51];
        int length1, length2;
        scanf("%s", s1);
        scanf("%s", s2);
        length1 = strlen(s1);
        length2 = strlen(s2);
        if (s1[length1-1] == s2[length2-1]) {
            if (s1[length1-1] == 'S') {
                if (length1 > length2) {
                    printf("<\n");
                }
                else if (length2 > length1) {
                    printf(">\n");
                }
                else {
                    printf("=\n");
                }
            }
            else {
                if (length1 > length2) {
                    printf(">\n");
                }
                else if (length2 > length1) {
                    printf("<\n");
                }
                else {
                    printf("=\n");
                }
            }
        }
        else {
            int a, b;
            a = s1[length1-1];
            b = s2[length2-1];
            if (a < b) {
                printf(">\n");
            }
            else {
                printf("<\n");
            }
        }

    }
    return 0;
}