/**
 * @file sum.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1742/problem/0
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int a, b, c, ans, sum;
        cin>>a>>b>>c;
        ans = max(a, max(b, c));
        sum = a + b + c;
        if (sum == (2*ans)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}