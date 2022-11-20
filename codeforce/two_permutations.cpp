/**
 * @file two_permutations.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-20
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1761/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, a, b, ans;
        cin>>n>>a>>b;
        if (n == a && a == b) {
            cout<<"YES"<<endl;
        }
        else {
            if ((ans = n - a - b) <= 1) {
                cout<<"NO"<<endl;
            }
            else {
                cout<<"YES"<<endl;
            }
        }
    }
}
