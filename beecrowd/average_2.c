/**
 * @file average_2.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://www.beecrowd.com.br/judge/en/problems/view/1006
 * 
 */

#include<stdio.h>
int main() {
    double A, B, C, MEDIA;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    MEDIA = ((A*2)+(B*3)+(C*5))/10;
    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;
}

