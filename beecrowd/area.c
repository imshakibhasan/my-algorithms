/**
 * @file area.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://www.beecrowd.com.br/judge/en/problems/view/1012
 * 
 */
#include<stdio.h>
int main() {
    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf\n", (0.5*A*C));
    printf("CIRCULO: %.3lf\n", (3.14159*C*C));
    printf("TRAPEZIO: %.3lf\n", ((A+B)/2)*C);
    printf("QUADRADO: %.3lf\n", (B*B));
    printf("RETANGULO: %.3lf\n", (A*B));


    return 0;
}