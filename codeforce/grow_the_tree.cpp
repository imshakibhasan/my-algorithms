/**
 * @file grow_the_tree.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-31
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1248/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, i, x = 0, y = 0, dis;
    cin>>n;
    long long arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int r = n / 2;
    for (i = 0; i < n; i++) {
        if (i < r) {
            y = y + arr[i];
        }
        else {
            x = x + arr[i];
        }
    }
    dis = pow(x, 2) + pow(y, 2);
    cout<<dis<<endl;
}