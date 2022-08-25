/**
 * @file average_1.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://www.beecrowd.com.br/judge/en/problems/view/1005
 * 
 */
#include<stdio.h>
int main() {
    double A, B, MEDIA;
    scanf("%lf", &A);
    scanf("%lf", &B);
    MEDIA = ((A*3.5)+(B*7.5))/11;
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}