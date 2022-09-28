/**
 * @file caps_lock.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/131/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int i, length, flag = 0;
    char str[101];
    scanf("%s", str);
    length = strlen(str);
    for (i = 1; i < length; i++) {
        if(str[i] >= 97) {
            printf("%s", str);
            flag++;
            break;
        }
    }
    if (flag == 0) {
        if (str[0] >= 97) {
            str[0] = 65 + (str[0] - 97);
        }
        else {
            str[0] = 97 + (str[0] - 65);
        }
        for (i = 1; i < length; i++) {
            if (str[i] >= 97) {
                str[i] = 65 + (str[i] - 97);
            }
            else {
                str[i] = 97 + (str[i] - 65);
            }
        }
        printf("%s", str);
    }
    return 0;
}