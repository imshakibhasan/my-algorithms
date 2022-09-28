/**
 * @file string_task.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-10
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/118/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int i, length;
    char str[101];
    scanf("%s", str);
    length = strlen(str);
    for (i = 0; i < length; i++) {
        if (str[i] < 97) {
            str[i] = 97 + (str[i] - 65);
        }
    }
    for (i = 0; i < length; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] =='y') {
        }
        else {
            printf(".%c", str[i]);
        }
    }
    return 0;
}