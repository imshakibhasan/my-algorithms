/**
 * @file odd_or_even_increments.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-01
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1669/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i, flag = 0;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (i = 0; i < n-2; i = i + 2) {
            if (arr[i] % 2 != arr[i+2] % 2) {
                flag++;
                break;
            }
        }
        for (i = 1; i < n-2; i = i + 2) {
            if (arr[i] % 2 != arr[i+2] % 2) {
                flag++;
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