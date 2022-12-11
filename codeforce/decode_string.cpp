/**
 * @file decode_string.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-10
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1729/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, i, val;
    string a;
    cin>>t;
    while (t--) {
        cin>>n;
        cin>>a;
        string b="";
        for(i = n-1; i >= 0; ) {
            if(a[i] == '0') {
                val=(a[i-2]-48)*10+a[i-1]-48;
                i= i - 3;
            }
            else {
                val=a[i]-48;
                i--;
            }
            b = b + char(val+97-1);
        }
        reverse(b.begin(), b.end());
        cout<<b<<endl;   
    }    
}