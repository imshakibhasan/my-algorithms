/**
 * @file unique_bid_auction.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-04
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1454/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int t;
    cin>>t;
    while (t--) {
        long long int i, count = 0, pos = -1, n, value = 0, flag = 0; 
        cin>>n;
        long long int arr[n], res[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            res[i] = arr[i];
        }
        sort(res, res+n);
        for (i = 0; i < n; i++) {
            count = 0;
            for (int j = 0; j < n; j++) {
                if (res[i] == res[j]) {
                    count++;
                }
            }
            if (count == 1) {
                value = res[i];
                break;
            }
        }
        for (i = 0; i < n; i++) {
            if (arr[i] == value) {
                pos = i+1;
                break;
            }
        }
        cout<<pos<<endl;
    }
}
