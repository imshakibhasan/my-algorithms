/**
 * @file parkway_walk.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-20
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1697/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m, i, sum = 0, x;
        cin>>n>>m;
        for (i = 0; i < n; i++) {
            cin>>x;
            sum = sum + x;
        }
        if (m - sum >= 0) {
            cout<<"0"<<endl;
        }
        else {
            cout<<sum-m<<endl;
        }
    }
}

/*
Input
3
3 1
1 2 1
4 5
3 3 5 2
5 16
1 2 3 4 5
*/

/*
Output
3
8
0
*/