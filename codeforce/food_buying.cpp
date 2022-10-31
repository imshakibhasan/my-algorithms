/**
 * @file food_buying.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-31
 * 
 * @copyright Copyright (c) 2022
 * problrem: https://codeforces.com/problemset/problem/1296/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int s, sum = 0, r = 0;
        cin>>s;
        while (s > 9) {
            r = s % 10;
            sum = sum + (s - r);
            s = (s / 10) + r;    
        }
        cout<<sum + s<<endl;
    }
}