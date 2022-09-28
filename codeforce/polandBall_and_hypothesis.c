/**
 * @file polandBall_and_hypothesis.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-09
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/755/A
 */
#include<stdio.h>
#include<math.h>
int main() {
    int n, m, i, dum;
    double limit, value;
    scanf("%d", &n);
    for (i = 1; i<= n; i++) {
        value = (n * i) + 1;
        dum = (n*i)+1;
        limit = sqrt(value);
        if (dum % 2 == 0 && dum > 2) {
            printf("%d", i);
        }
        else {

        }
    }
}