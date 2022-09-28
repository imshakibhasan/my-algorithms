/**
 * @file word.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/59/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int length, i, count_upc=0, count_loc=0;
    char str[101];
    scanf("%s", str);
    length = strlen(str);
    for (i = 0; i < length; i++) {
        if (str[i] >= 97) {
            count_loc++;
        }
        else {
            count_upc++;
        }
    }
    if ( count_loc >= count_upc) {
        for (i = 0; i < length; i++) {
            if (str[i] < 97) {
                str[i] = 97 + (str[i] - 65);
            }
        }
    }
    else {
        for (i = 0; i < length; i++) {
            if (str[i] >= 97) {
                str[i] = 65 + str[i] - 97;
            }
        }
    }
    printf("%s", str);
    return 0;
}
