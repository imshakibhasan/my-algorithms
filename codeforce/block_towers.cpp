/**
 * @file question_2.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-16
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1767/problem/B
 */
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, p = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        p = arr[0];
        sort(arr, arr+n);
        for (i = 0; i < n; i++) {
            if (arr[i] > p) {
                p = p + ceil((arr[i] - p)/2.0);
            }
        }
        cout<<p<<endl;
    }
}
