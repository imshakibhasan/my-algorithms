/**
 * @file abc.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1632/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        char str[n];
        cin>>str;
        if (n > 2) {
            cout<<"NO"<<endl;
        }
        else {
            if (str[0] != str[1]) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
}