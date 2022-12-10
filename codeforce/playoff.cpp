/**
 * @file playoff.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-10
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1651/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        long long int ans = 0;
        cin>>n;
        ans = pow(2, n);
        cout<<ans - 1<<endl;
    }
}