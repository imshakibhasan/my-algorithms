/**
 * @file dominos_diaster.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-26
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1567/A
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
        char str[n];
        cin>>str;
        for (i = 0; i < n; i++) {
            if (str[i] == 'U') {
                cout<<"D";
            }
            else if (str[i] == 'D') {
                cout<<"U";
            }
            else {
                cout<<str[i];
            }
        }
        cout<<endl;
    }
}