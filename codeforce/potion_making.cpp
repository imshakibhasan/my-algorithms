/**
 * @file potion_making.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-31
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1525/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int k, w, r, ans = 0;
        cin>>k;
        if (k == 100) {
            cout<<"1"<<endl;
            continue;
        }
        w = 100 - k;
        if (k < w) {
            r = k;
        }
        else {
            r = w;
        }
        while (r > 0) {
            if (k % r == 0 && w % r == 0) {
                break;
            }
            else {
                r--;
            }
        }
        ans = (k/r) + (w/r);
        cout<<ans<<endl;
    }
}

/*
Input
3
3
100
25
*/

/*
Output
100
1
4
*/