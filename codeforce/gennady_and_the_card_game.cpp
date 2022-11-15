/**
 * @file gennady_and_the_card_game.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-15
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1097/A
 */
#include<stdio.h>
int main() {
    int i, flag = 0;
    char ch1, ch2, ch;
    scanf("%c%c", &ch1, &ch2);
    scanf("%c", &ch);
    for (i = 0; i < 5; i++) {
        char  b0, b1;
        scanf("%c%c", &b0, &b1);
        scanf("%c", &ch);
        if (ch1 == b0 || ch1 == b1 || ch2 == b0 || ch2 == b1) {
            flag++;
        }
    }
    if (flag == 0) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }
    return 0;
}