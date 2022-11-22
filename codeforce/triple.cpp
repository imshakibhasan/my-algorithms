/**
 * @file triple.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-22
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1669/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, flag = 0;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for (i = 0; i < n-2; i++) {
            if (arr[i] == arr[i+1] && arr[i+1] == arr[i+2]) {
                cout<<arr[i]<<endl;
                flag++;
                break;
            }
        }
        if (flag == 0) {
            cout<<"-1"<<endl;
        }
    }
}