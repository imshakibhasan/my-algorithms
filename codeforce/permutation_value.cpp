/**
 * @file permutation_value.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-17
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1743/problem/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int n, j, p, q;
        cin>>n;
        p = n;
        q = 1;
        for (j = 1; j <= n; j++) {
            if (j % 2 != 0) {
                cout<<q<<" ";
                q = q + 1;
            }
            else {
                cout<<p<<" ";
                p = p - 1;
            }
        }
        cout<<endl;
    }
}