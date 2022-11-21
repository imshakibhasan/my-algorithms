/**
 * @file print_a_pedestal_codeforces_logo.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1690/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n == 7) {
            cout<<2<<" "<<4<<" "<<1<<endl;
            continue;
        }
        if (n%3 == 0) {
            cout<<n/3<<" "<<(n/3)+1<<" "<<(n/3)-1<<endl;
        }
        else {
            cout<<(n/3)+1<<" "<<(n/3)+2<<" "<<(n-((n/3)+2) - ((n/3)+1))<<endl;
        }
    }
}