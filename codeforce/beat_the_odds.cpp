/**
 * @file beat_the_odds.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-04
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1691/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, i, odd = 0, even = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if (even < odd) {
            cout<<even<<endl;
        }
        else {
            cout<<odd<<endl;
        }
    }
}