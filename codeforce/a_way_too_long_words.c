/**
 * @file a_way_too_long_words.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-05
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem:https://codeforces.com/problemset/problem/71/A
 * 
 */

#include<stdio.h>
#include<string.h>
int main() {
    int i, n, length;
    char str[100];
    scanf("%d", &n);
    for ( i=0; i<n; i++ ) {
        scanf("%s", str);
        length = strlen(str);
        if ( length>10 ) {
            printf("%c%d%c", str[0], length-2, str[length-1]);
        }
        else {
            printf("%s", str);
        }
        printf("\n");
    }
    return 0;   
}
