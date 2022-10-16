/**
 * @file rebellion.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-16
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1746/problem/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0;  i < t; i++) {
        int n, j, count = 0;
        cin>>n;
        int arr[n], res[n];
        for (j = 0; j < n; j++) {
            cin>>arr[j];
            res[j] = arr[j];
        }
        sort(res,res+n);
        for (j = 0; j < n; j++) {
            if (res[j] != arr[j]) {
                count++;
            }
        }
        cout<<count/2<<endl;
    }
}