/**
 * @file arithmatic_array.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-19
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1537/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i, sum = 0;
        cin>>n;
        for (i = 0; i < n; i++) {
            int x;
            cin>>x;
            sum = sum + x;
        }
        if (sum < n) {
            cout<<"1"<<endl;
        }
        else {
            cout<<(sum - n)<<endl;
        }
    }
}
