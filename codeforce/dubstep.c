/**
 * @file dubstep.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-22
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://codeforces.com/problemset/problem/208/A
 * 
 */
#include<stdio.h>
#include<string.h>
int main() {
    int i, length, flag=0;
    char str[200];
    scanf("%s", str);
    length = strlen(str);
    for (i = 0; i < length; ) {
        if (str[i] =='W' && str[i+1] == 'U' && str[i+2] == 'B') {
            if (flag > 0) {
                printf(" ");
            }
            i = i+3;
        }
        else {
            printf("%c", str[i]);
            i++;
            flag++;
        }
    }
    return 0;
}