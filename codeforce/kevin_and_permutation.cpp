/**
 * @file kevin_and_permutation.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1754/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i;
        cin>>n;
        int p = n/2, q = 1;
        for (i = 1; i <= n; i++) {
            if (i%2 != 0) {
                cout<<p+1<<" ";
                p++;
            }
            else {
                cout<<q<<" ";
                q++;
            }
        }
        cout<<endl;
    }
}