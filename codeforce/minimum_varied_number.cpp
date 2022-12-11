/**
 * @file minimum_varied_number.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-11
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1714/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, s, r, flag = 0;
        cin>>s;
        r = 9;
        while (s > 0) {
            if (s >= r) {
                s = s - r;
                r--;
            }
            else {
                flag++;
                break;
            }
        }
        if (flag > 0) {
            cout<<s;
            for (i  = r+1; i <= 9; i++) {
                cout<<i;
            }
        }
        else {
            for (i = r + 1; i <= 9; i++) {
                cout<<i;
            }
        }
        cout<<endl;
    }
}