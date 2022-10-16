/**
 * @file maxmina.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-16
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1746/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int n, k, j, flag = 0;
        cin>>n>>k;
        int arr[n];
        for (j = 0; j < n; j++) {
            cin>>arr[j];
            if (arr[j] == 1) {
                flag++;
            }
        }
        if (flag > 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}