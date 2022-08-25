/**
 * @file boy_or_girl.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-13
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/236/A
 * 
 */
#include<stdio.h>
#include<string.h>
int main() {
    int i, j, length, count=0;
    char name[100];
    scanf("%s", name);
    length = strlen(name);
    for ( i=0; i<length-1; i++ ) {
        for ( j=i+1; j<length; j++ ) {
            if ( name[i]==name[j]) {
                count++;
                break;
            }    
        }
    }
    printf("Length = %d\n", length);
    printf("Count = %d\n", count);
    if ( (length-count)%2==0 ) {
        printf("CHAT WITH HER!\n");
    }
    else {
        printf("IGNORE HIM!");
    }
    return 0;
} 