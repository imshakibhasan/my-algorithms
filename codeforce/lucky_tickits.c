/**
 * @file lucky_tickits.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-29
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/problemset/problem/146/A
 */
/*#include<stdio.h>
int main() {
    int i, length, last_number, count=0, first_sum=0, last_sum=0;
    long int n;
    scanf("%d%d", &length, &n);
    int arr[length];
    while (n > 0) {
        last_number = n % 10;
        printf("last Digit = %d\n", last_number);
        if ( last_number == 4 || last_number == 7) {
            count++;
            arr[length - count] = last_number;
        }
        n = n / 10;
    }
   // for (i = 0; i < length; i++) {
    //    printf("%d\t", arr[i]);
   // }
    if (count == length) {
        for (i = 0; i< length / 2; i++) {
            first_sum = first_sum + arr[i];
            last_sum = last_sum + arr[(length/2) + i]; 
        }
        printf("First sum = %d\nLast Sum = %d\n", first_sum, last_sum);
        if (first_sum == last_sum) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else {
        printf("NO");
    }
    return 0;
}
*/
#include<stdio.h>
int main() {
    int i, n, first_sum=0, last_sum=0, count=0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    for (i = 0; i < n; i++) {
        if (str[i] == '4' || str[i] == '7') {
            count++;
        }
    }
    if (count == n) {
        for (i = 0; i < n/2; i++) {
            first_sum = first_sum + str[i];
            last_sum = last_sum + str[(n/2)+i];
        }
        if (first_sum == last_sum) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else {
        printf("NO");
    }
    return 0;
}
