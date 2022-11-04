/**
 * @file two_groups.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-04
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1747/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, x, i, sum = 0;
        cin>>n;
        for (i = 0; i < n; i++) {
            cin>>x;
            sum = sum + x;
        }
        sum = abs(sum);
        cout<<sum<<endl;
    }
}