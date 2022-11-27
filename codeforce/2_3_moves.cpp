/**
 * @file 2_3_moves.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-26
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1716/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, count = 0;
        cin>>n;
        if (n == 1) {
            cout<<"2"<<endl;
        }
        else {
            if (n%3 == 0) {
                cout<<n/3<<endl;
            }
            else {
                cout<<(n/3)+1<<endl;
            }
        }
    }
}