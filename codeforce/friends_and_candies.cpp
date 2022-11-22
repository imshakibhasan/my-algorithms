/**
 * @file friends_and_candies.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-22
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1538/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, sum = 0, max = 0, count = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            sum = sum + arr[i];
        }
        if (sum % n == 0) {
            max = sum / n;
            for (i = 0; i < n; i++) {
                if (arr[i] > max) {
                    count++;
                }
            }
            cout<<count<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
}