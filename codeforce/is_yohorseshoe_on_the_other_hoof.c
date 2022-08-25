/**
 * @file is_yohorseshoe_on_the_other_hoof.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * problem: https://codeforces.com/problemset/problem/228/A
 */

#include<stdio.h>
int main() {
    int i, j, arr[4], count=0;
    for ( i=0; i<4; i++ ) {
        scanf("%d", &arr[i]);
    }
    for ( i=0; i<3; i++) {
        for ( j=i+1; j<4; j++ ) {
            if ( arr[i]==arr[j] ) {
                count++;
                break;
            }
        }
    }
    printf("%d", (4 -(4-count)));
    return 0;
}
// 251590420 586975278 916631563 586975278
