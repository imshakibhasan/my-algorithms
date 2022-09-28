/**
 * @file spell_check.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-31
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/1722/A
 * 
 */
#include<stdio.h>
int main() {
    int i, j, k, t, n, count, flag;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        count = 0;
        flag = 0;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        if (n == 5) {
            for (j = 0; j < 4; j++) {
                if (flag == 0) {
                    for ( k = j+1; k < 5; k++) {
                        if (str[j] == str[k]) {
                            flag++;
                            printf("NO\n");
                            break;
                        }
                    }
                }
            }
            if ( flag == 0) {
                for (j = 0; j < 5; j++) {
                    if (str[j] == 'T' || str[j] == 'i' || str[j] == 'm' || str[j] == 'u' || str[j] == 'r') {
                        count++;
                    }
                }
                if (count == 5) {
                    printf("YES\n");
                }
                else {
                    printf("NO\n");
                }
            }
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
/*
#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    char s = "Timur";

}
*/