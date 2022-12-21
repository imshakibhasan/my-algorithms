/**
 * @file IQ_test.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-21
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/25/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, x, even = 0, odd = 0, pos_e = 0, pos_o = 0;
    cin>>n;
    for (i = 1; i <= n; i++) {
        cin>>x;
        if (x % 2 == 0) {
            even++;
            pos_e = i;
        }
        else {
            odd++;
            pos_o = i;
        }
    }
    if (even > odd) {
        cout<<pos_o<<endl;
    }
    else {
        cout<<pos_e<<endl;
    }
}