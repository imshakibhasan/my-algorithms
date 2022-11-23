/**
 * @file strange_table.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-23
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1506/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, m, x, r, ans;
        cin>>n>>m>>x;
        r = (x-1)/n;
        ans = (x-1)%n;
        cout<<(ans*m)+(r+1)<<endl;
    }
}