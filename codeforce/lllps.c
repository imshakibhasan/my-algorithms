/**
 * @file lllps.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-19
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/202/A
 */

#include<stdio.h>
#include<string.h>
int main() {
    int i, j, length, count=0;
    char max, str[10];
    scanf("%s", str);
    length = strlen(str);
    max = str[0];
    for ( i=1; i<=length; i++ ) {
        if ( str[i]> max) {
            max = str[i];
        }
    }
    for ( i=0; i<=length; i++ ) {
        if ( max==str[i] ) {
            count++;
        }
    }
    for ( i=0; i<count; i++ ) {
        printf("%c", max);
    }
    return 0;
}