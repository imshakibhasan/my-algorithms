/**
 * @file maximum_increase.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/702/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i, count = 1, ans = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    if (n == 1) {
        cout<<"1";
    }
    else {
        for (i = 0; i < n-1; i++) {
            if (arr[i+1] > arr[i] ) {
                count++;
            }
            else {
                count = 1;
            }
            ans = max(ans, count);
        }
        cout<<ans;
    }
}