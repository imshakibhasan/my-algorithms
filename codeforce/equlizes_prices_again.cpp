/**
 * @file equlizes_prices_again.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-02
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1234/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while (q--) {
        long long int n, i, sum = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            sum = sum + arr[i];
        }
        sum = ceil((double) sum/n);
        cout<<sum<<endl;
    }
}