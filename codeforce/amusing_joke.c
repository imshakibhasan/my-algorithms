/**
 * @file amusing_joke.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-19
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/141/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int i, j, count = 0, length_1, length_2, length_3;
    char s1[101], s2[101], s3[101];
    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);
    length_1 = strlen(s1);
    length_2 = strlen(s2);
    length_3 = strlen(s3);
    if ((length_1 + length_2) == length_3) {
        for (i = 0; i < length_1; i++) {
            for (j = 0; j < length_3; j++) {
                if (s1[i] == s3[j]) {
                    s3[j] = '0';
                    count++;
                    break;
                }
            }
        }
        for (i = 0; i < length_2; i++) {
            for (j = 0; j < length_3; j++) {
                if (s2[i] == s3[j]) {
                    s3[j] = '0';
                    count++;
                    break;
                }
            }
        }
        if (count == length_3) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else {
        printf("NO");
    }
    return 0;
}