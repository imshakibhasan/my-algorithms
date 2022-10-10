/**
 * @file far_relative_birthday_cake.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-02
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/629/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i, j, k, count = 0, ans = 0;
    cin>>n;
    char arr[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            count = 0;
            if (arr[i][j] == 'C') {
                for (k = i+1; k < n; k++) {
                    if (arr[k][j] == 'C') {
                        count++;
                    }
                }
                for (k = j+1; k < n; k++) {
                    if (arr[i][k] == 'C') {
                        count++;
                    }
                }
            }
            ans+=count;
        }
    }
    cout<<ans;
}
/*
#include<stdio.h>
int main() {
    int n, i, j, k, count = 0, ans = 0;
    scanf("%d", &n);
    char arr[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%c", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            count = 0;
            if (arr[i][j] =='C') {
                for (k = i+1; k < n; j++) {
                    if (arr[k][j] == 'C') {
                        count++;
                    }
                }
                for (k = j+1; j < n; j++) {
                    if (arr[i][k] == 'C') {
                        count++;
                    }
                }
            }
            ans +=count;
        }
    }
    printf("%d", ans);
    return 0;
}
*/