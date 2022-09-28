/**
 * @file polandball_and_hypothesis.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-24
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/755/A
 */
#include<stdio.h>
int main() {
    int n, i, value = 0, j, flag = 0;
    scanf("%d", &n); 
    if (n%2 != 0) {
        if (n == 1) {
            printf("2");
        }
        else {
            printf("1");
        }
    }
    else {
        for (i = 1; i <= 1000; i++) {
            value = (n*i) + 1;
            for (j = 3; j < (value/2); j++) {
                if (value%j==0) {
                    printf("%d", i);
                    flag++;
                    break;
                }
            }
            if (flag > 0) {
                break;
            }
        }
    }
    return 0;
}