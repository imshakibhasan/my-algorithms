/**
 * @file equlizes_price.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-02
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1183/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, k, i, maxi, mini = 1000000000, flag = 0;
        cin>>n>>k;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] < mini) {
                mini = arr[i];
            }
        }
        maxi = mini + k;
        for (i = 0; i < n; i++) {
            if (abs(maxi-arr[i]) <= k) {

            }
            else {
                flag++;
            }
        }
        if (flag == 0) {
            cout<<maxi<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
}