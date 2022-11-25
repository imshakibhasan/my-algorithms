/**
 * @file SSeeeeiinngg_DDoouubbllee.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-25
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1758/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j, n, p;
        char str[101];
        cin>>str;
        n = strlen(str);
        sort(str, str+n);
        for (i = n -1; i >= 0; i--) {
            cout<<str[i];
        }
        cout<<str<<endl;
    }
}