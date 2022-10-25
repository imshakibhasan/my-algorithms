/**
 * @file fair_playoff.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-25
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1535/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int s1, s2, s3, s4, max1, max2, min1, min2;
        cin>>s1>>s2>>s3>>s4;
        max1 = max(s1, s2);
        min1 = min(s1, s2);
        max2 = max(s3, s4);
        min2 = min(s3, s4);
        if (max1 > min2 && max2 > min1) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}