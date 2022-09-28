/**
 * @file football.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-20
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/96/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int i, length, flag = 0;
    char str[101];
    scanf("%s", str);
    length = strlen(str);
    if (length < 7) {
        printf("NO");
        flag++;
    }
    else {
        for (i = 0; i < length-6; i++) {
            if (str[i] == '0' && str[i+1] == '0' && str[i+2] == '0' && str[i+3] == '0' && str[i+4] == '0' && str[i+5] == '0' && str[i+6] == '0') {
                printf("YES");
                flag++;
                break;
            }
            else if (str[i] == '1' && str[i+1] == '1' && str[i+2] == '1' && str[i+3] == '1' && str[i+4] == '1' && str[i+5] == '1' && str[i+6] == '1') {
                printf("YES");
                flag++;
                break;
            }
        }
    }
    if (flag == 0) {
        printf("NO");
    }
    return 0;
}