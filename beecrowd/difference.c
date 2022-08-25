/**
 * @file difference.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://www.beecrowd.com.br/judge/en/problems/view/1007
 * 
 */
#include<stdio.h>
int main() {
    int A, B, C, D, DIFERENCA;
    scanf("%d%d%d%d", &A,&B,&C,&D);
    DIFERENCA = (A*B) - (C*D);
    printf("DIFERENCA = %d\n", DIFERENCA);
    return 0;
}