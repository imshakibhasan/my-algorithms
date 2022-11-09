/**
 * @file most_unstable_array.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-09
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1353/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, m;
        cin>>n>>m;
        if (n == 1) {
            cout<<"0"<<endl;
        }
        else if (n == 2) {
            cout<<m<<endl;
        }
        else {
            cout<<(2*m)<<endl;
        }
    }
}
