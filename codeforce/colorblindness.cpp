/**
 * @file colorblindness.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-15
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1722/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, flag = 0;
        cin>>n;
        char s1[n], s2[n];
        cin>>s1>>s2;
        for (i = 0; i < n; i++) {
            if (s1[i] == 'G') {
                s1[i] = 'B';
            }
        }
        for (i = 0; i < n; i++) {
            if (s1[i] == 'R' && s2[i] == 'G' || s2[i] == 'R') {
                flag++;
            }
            else if (s2[i] == 'R' && s1[i] == 'G' || s1[i] == 'R') {
                flag++;
            }
        }
        if (flag > 0) {
            cout<<"YES"<<endl;
        } 
        else {
            cout<<"NO"<<endl;
        }
    }
}