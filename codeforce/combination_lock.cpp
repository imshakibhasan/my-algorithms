/**
 * @file combination_lock.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-22
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/540/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, mini, moves = 0;
    cin>>n;
    char s1[n], s2[n];
    cin>>s1>>s2;
    for (i = 0; i < n; i++) {
        mini = abs(s1[i] - s2[i]);
        if (mini > 5) {
            moves = moves + (10-mini);
        }
        else {
            moves = moves + mini;
        }
    }
    cout<<moves<<endl;
}