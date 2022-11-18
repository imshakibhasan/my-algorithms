/**
 * @file fair_division.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1472/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i, count1 = 0, count2 = 0, sum = 0;
        cin>>n;
        for (i = 0; i < n; i++) {
            int x;
            cin>>x;
            if (x == 1) {
                count1++;
            }
            else {
                count2++;
            }
            sum = sum + x;
        }
        if ((sum%2 == 0 && count2%2 == 0) || (sum%2 == 0 && count1 > 0 && count1%2 == 0)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}