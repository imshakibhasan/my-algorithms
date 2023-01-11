/**
 * @file good_pairs.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-11
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1656/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, max = 0, p1 = 0, mini = 1000000000, p2 = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] > max) {
                max = arr[i];
                p1 = i;
            }
            if (arr[i] < mini) {
                mini = arr[i];
                p2 = i;
            }
        }
        cout<<p2+1<<" "<<p1+1<<endl;
    }
}