/**
 * @file kefa_and_first_steps.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-15
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/580/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int i, n, ans = 0, count = 1;
    cin>>n;
    long long int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    if (n == 1) {
        cout<<1<<endl;
    }
    else {
        for (i = 0; i < n - 1; i++) {
            if (arr[i] <= arr[i+1]) {
                count++;
            }
            else {
                count = 1;
            }
            ans = max(count, ans);
        }
        cout<<ans<<endl;
    }
}