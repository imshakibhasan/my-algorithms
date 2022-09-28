/**
 * @file lucky_division.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-22
 * 
 * @copyright Copyright (c) 2022
 * problem : 
 */
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0 ) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}