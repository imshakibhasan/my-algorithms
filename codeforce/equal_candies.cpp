/**
 * @file equal_candies.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1676/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, mini = 1000000000, sum = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] < mini) {
                mini = arr[i];
            }
        }
        for (i = 0; i < n; i++) {
            sum = sum + (arr[i] - mini);
        }
        cout<<sum<<endl;
    }
}