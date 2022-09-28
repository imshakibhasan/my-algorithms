/**
 * @file ostop_and_grasshopper.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-24
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/735/A
 */
#include<stdio.h>
int main() {
    int n, k, i, j, s, r, flag = 0;
    scanf("%d%d", &n, &k);
    char str[n];
    scanf("%s", str);
    for (i = 0; i < n; i++) {
        if (str[i] == 'G') {
            s = i;
        }
        if (str[i] == 'T') {
            r = i;
        }
    }
    if (r > s) {
        for (i = s+k; i < n; i= i+k) {
            if (str[i] == '.') {
                continue;
            }
            else if (str[i] == 'T') {
                printf("YES");
                flag++;
                break;
            }
            else {
                printf("NO");
                flag++;
                break;
            }
        }
    }
    else {
        for (i = s-k; i>= 0; i = i - k) {
            if (str[i] == '.') {
                continue;
            }
            else if (str[i] == 'T') {
                printf("YES");
                flag++;
                break;
            }
            else {
                printf("NO");
                flag++;
                break;
            }
        }
    }
    if (flag == 0) {
        printf("NO");
    }
    return 0;
}