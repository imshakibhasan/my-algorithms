/**
 * @file number_represent.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-16
 * 
 * @copyright Copyright (c) 2022
 * problem: https://codeforces.com/contest/1744/problem/0
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int n, j, k;
        cin>>n;
        int arr[n];
        char str[n];
        for (j = 0; j < n; j++) {
            cin>>arr[j];
        }
        cin>>str;
        int flag = 0;
        for (j = 0; j < n - 1; j++) {
            for (k = j + 1; k < n; k++) {
                if (arr[j] == arr[k]) {
                    if (str[j] != str[k]) {
                        flag++;
                        break;
                    }
                }
            }
            if (flag > 0) {
                break;
            }
        }
        if (flag > 0) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
}