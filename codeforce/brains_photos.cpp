/**
 * @file brains_photos.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/707/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, i, j, flag = 0;
    cin>>n>>m;
    for (i = 0; i < n; i++) {
        char arr[m];
        for (j = 0; j < m; j++) {
            cin>>arr[j];
            if (arr[j] == 'C' || arr[j] == 'M' || arr[j] == 'Y') {
                flag++;
            }
        }
    }
    if (flag == 0) {
        cout<<"#Black&White";
    }
    else {
        cout<<"#Color";
    }
}
/*
#include<stdio.h>
int main() {
    int n, m, i, flag = 0;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        char arr[m];
        for (int j = 0; j < m; j++) {
            scanf("%c", &arr[j]);
            if (arr[j] == 'C' || arr[j] == 'M' || arr[j] == 'Y') {
                flag++;
            }
        }
    }
    if (flag == 0) {
        printf("#Black&White");
    }
    else {
        printf("#Color");
    }
    return 0;
}
*/