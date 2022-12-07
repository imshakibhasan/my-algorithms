/**
 * @file cherry.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-07
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1554/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, ans = 0, r = 0;
        cin>>n;
        long long int arr[n];
        for(i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (i = 0; i < n - 1; i++) {
            r = arr[i] * arr[i+1];
            ans  = max(ans, r);
        }
        cout<<ans<<endl;
    }
}