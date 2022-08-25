/**
 * @file sum_of_two_values.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/gymProblem/102961/G 
 */

#include<stdio.h>
void main() {
    int i, required, array_size, target, flag=0;
    scanf("%d%d", &array_size, &target);
    int arr[array_size], desire_arr[array_size];

    required = arr[0]-target;
    desire_arr[0]=required;

    for ( i=0; i<array_size; i++ ) {
        scanf("%d", &arr[i]);
    }

    for ( i=1; i<array_size; i++ ) {
        for ( int j=0; j<i; j++) {
            if ( arr[i]==desire_arr[j] ) {
                printf("%d %d", i+1, j+1);
                flag++;
                break;
            }
        }
        if ( flag==1 ) {
            break;
        }
        else {
            required = arr[i] - target;
            desire_arr[i] = required;
        }
        
    }

}