/**
 * @file anton_and_letters.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-19
 * 
 * @copyright Copyright (c) 2022
 * problrm : https://codeforces.com/problemset/problem/443/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int i, count = 0, j;
    char str[1001];
    scanf("%[^\n]s",str);
    int length = strlen(str);
    for (i = 1; i < length - 4; i=i+3) {
        for (j = i + 3; j < length - 1; j = j + 3) {
            if (str[i] == str[j]) {
                count++;
                break;
            }
        }   
    }
    printf("%d", (length/3) - count);
    return 0;
}