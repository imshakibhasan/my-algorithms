/**
 * @file vasya_and_coins.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-17
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1660/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int c_1 = 0, c_2 = 0;
        cin>>c_1>>c_2;
        if (c_1 == 0) {
            cout<<"1"<<endl;
        } 
        else {
            cout<<(c_1 + (c_2*2) + 1)<<endl;
        }
    }
}