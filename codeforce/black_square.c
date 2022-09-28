/**
 * @file black_square.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-28
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/431/A
 */
#include<stdio.h>
#include<string.h>
int main() {
    int a1, a2, a3, a4, length, calorie = 0;
    scanf("%d%d%d%d", &a1, &a2, &a3, &a4);
    char str[100001];
    scanf("%s", str);
    length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] == '1') {
            calorie = calorie + a1;
        }
        else if (str[i] == '2') {
            calorie = calorie + a2;
        }
        else if (str[i] == '3') {
            calorie = calorie + a3;
        }
        else {
            calorie = calorie + a4;
        }
    }
    printf("%d", calorie);
    return 0;
}