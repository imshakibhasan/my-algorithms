/**
 * @file anton_and_danik.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-12
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/734/A
 */
#include<stdio.h>
int main() {
    int n, i, count_a = 0, count_d = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    for (i = 0; i < n; i++) {
        if (str[i] == 'A') {
            count_a++;
        }
        else {
            count_d++;
        }
    }
    if (count_a > count_d) {
        printf("Anton");
    }
    else if (count_a < count_d) {
        printf("Danik");
    }
    else {
        printf("Friendship");
    }
    return 0;
}