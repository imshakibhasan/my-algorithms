/**
 * @file special_permutation.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1454/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n;
        cin>>n;
        int p = n, q = 1;
        if (n%2 == 0) {
            for (i = n; i > 0; i--) {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else {
            for (i = n; i > 0; i--) {
                if (i == (n/2) + 1) {
                    cout<<i-1<<" ";
                }
                else if (i == (n/2)) {
                    cout<<i+1<<" ";
                }
                else {
                    cout<<i<<" ";
                }
            }
            cout<<endl;
        }
    }
}