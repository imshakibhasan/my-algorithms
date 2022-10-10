/**
 * @file bus_to_udayland.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/711/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i, flag = 0, p = 0;
    cin>>n;
    char arr[(n*5)];
    for (i = 0; i < (n*5); i++) {
        cin>>arr[i];
    }
    for (i = 0; i < (n*5) - 1; ) {
        if (arr[i] == 'O' && arr[i+1] == 'O') {
            flag++;
            arr[i] = '+';
            arr[i+1] = '+';
            break;
        }
        p++;
        if (p%2 == 0) {
            i = 5 * (p/2);
        }
        else {
            i = i + 3;
        }
    }
    if (flag == 0) {
        cout<<"NO";
    }
    else {
        cout<<"YES\n";
        for (i = 0; i < (n*5); i++) {            
            if (i%5 == 0) {
                if (i > 0) {
                    cout<<endl;
                }
            }
            cout<<arr[i];
        }
    }
}
/*
#include<stdio.h>
int main() {
    int n, i, flag = 0;
    scanf("%d", &n);
    char arr[n*5];
    for (i = 1; i <= n*6; i++) {
        char f;
        if (i % 6 == 0) {
            scanf("%c", &f);
            continue;
        }
        scanf("%c", &arr[i]);
    }
    for (i = 1; i < (n*5)-3; i = i + 3) {
        if (arr[i] == 'O' && arr[i+1] == 'O') {
            arr[i] = '+';
            arr[i+1] = '+';
            break;
        }
    }
    for (i = 1; i < (n*5); i++) {
        if (i % 6 == 0) {
            printf("\n");
            continue;
        }
        printf("%c", arr[i]);
    }
    return 0;
}
*/
/*
if (arr_i[0] == 'O' && arr_i[1] == 'O') {
            if (flag == 0) {
                flag++;
                arr_i[0] = '+';
                arr_i[1] = '+';
            }
        }
        else if (arr_i[3] == 'O' && arr_i[4] == 'O') {
            if (flag == 0) {
                flag++;
                arr_i[3] = '+';
                arr_i[4] = '+';
            }
        }
*/

/*
XO|XO
XX|XX
XO|XX
XO|XO
XX|OX
XX|XX
OX|XO
OX|XX
XO|XX
XX|XX
XO|XO
XO|OX
XX|OX
XX|XX
XO|XX
XO|OX
XO|XX
XO|OX
XO|OX
OX|XO
XO|XO
XO|XX
XO|XX
XO|XX
OX|OX
XO|XX
OX|XO
XX|XX
XX|OX
XO|XO
XO|XO
OX|XO
XO|XO
XO|XO
XX|XX
XX|OX
XX|XX
XX|XX
XX|XO
XX|XX
XX|XX
OX|OX
XX|XO
XO|XO
XX|OX
XO|XO
OX|XX
XO|XX
XO|XO
XO|OX
OX|XX
OX|XO
OX|OO
XX|XO
XX|XO
OX|XX
XO|XX
OX|XO
XO|OX
XX|XO
OX|OX
OX|OO
OX|XX
XX|XO
XX|OX
XX|OX
XX|OX
XO|XO
OX|XO
XO|OX
XX|XO
XO|OX
*/