/**
 * @file string_similarity.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1400/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main () {
    int t, i, j, n;
    cin>>t;
    for (i = 0; i < t; i++) {
        string s;
        cin>>n;
        cin>>s;
        for (j = 0; j < n; j++) {
            cout<<s[n-1];
        }
        cout<<endl;
    }
    return 0;
}