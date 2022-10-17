/**
 * @file password.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-17
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1743/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int n, j, count;
        cin>>n;
        for (j = 0; j < n; j++) {
            int x;
            cin>>x;
        }
        count = (((10-n) * (9-n)) / 2) * 6;
        cout<<count<<endl;
    }
}