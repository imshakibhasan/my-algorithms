/**
 * @file xenia_and_ringroad.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-21
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/339/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int i, n, m, x, res = 0, pos = 1;
    cin>>n>>m;
    for (i = 0; i < m; i++) {
        cin>>x;
        if (x >= pos) {
            res = res + (x-pos);
        }
        else {
            res = res + (n - (pos - x));
        }
        pos = x;
    }
    cout<<res<<endl;
}