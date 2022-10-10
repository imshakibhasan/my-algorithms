/**
 * @file bear_and_reverse_radewoosh.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/658/A
 */
#include<stdio.h>
int main() {
    int n, c, i, t = 0, limak_points = 0, radewoosh_points = 0, r;
    scanf("%d%d", &n, &c);
    int p_arr[n], t_arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &p_arr[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &t_arr[i]);
    }
    for (i = 0; i < n; i++) {
        t = t + t_arr[i];
        r = (p_arr[i] - (c*t));
        if (r > 0) {
            limak_points = limak_points + r;
        }
    }
    t = 0;
    r = 0;
    for (i = n-1; i >= 0; i--) {
        t = t + t_arr[i];
        r = p_arr[i] - (c*t);
        if (r > 0) {
            radewoosh_points = radewoosh_points + r;
        }
    }
    if (radewoosh_points > limak_points) {
        printf("Radewoosh");
    }
    else if (radewoosh_points == limak_points) {
        printf("Tie");
    }
    else {
        printf("Limak");
    }
    return 0;
}