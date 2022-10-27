/**
 * @file add_odd_or_subtract_even.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-27
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1311/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int a, b, d;
        cin>>a>>b;
        if (a == b) {
            cout<<"0"<<endl;
        }
        else if (b > a) {
            d = b - a;
            if (d % 2 == 0) {
                cout<<"2"<<endl;
            }
            else {
                cout<<"1"<<endl;
            }
        }
        else {
            d = a - b;
            if (d%2 == 0) {
                cout<<"1"<<endl;
            }
            else {
                cout<<"2"<<endl;
            }
        }
    }
}