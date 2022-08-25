/**
 * @file simple_calculate.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://www.beecrowd.com.br/judge/en/problems/view/1010
 * 
 */
#include<stdio.h>
int main() {
    int code_of_product1, number_of_unit1, code_of_product2, number_of_unit2; 
    double per_unit_price1, per_unit_price2;
    scanf("%d%d%lf", &code_of_product1, &number_of_unit1, &per_unit_price1);
    scanf("%d%d%lf", &code_of_product2, &number_of_unit2, &per_unit_price2);
    printf("VALOR A PAGAR: R$ %.2lf\n", ((number_of_unit1*per_unit_price1)+(number_of_unit2*per_unit_price2)));
    return 0;
}