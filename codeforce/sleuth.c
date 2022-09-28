/**
 * @file sleuth.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-24
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/49/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int i, length;
    char str[101];
    scanf("%[^\n]s",str);
    length = strlen(str);
    for (i = length-1; i >= 0 ; i--) {
        if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y' || str[i]=='a' || str[i]     =='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y' ) {
            printf("YES");
            break;
        }
        else if (str[i] == ' ' || str[i] == '?') {
            continue;
        }
        else {
            printf("NO");
            break;
        }
    }
    return 0;
}