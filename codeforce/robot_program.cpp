/**
 * @file robot_program.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-29
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1452/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int x, y, ans = 0;
        cin>>x>>y;
        if (x == y) {
            cout<<(2*x)<<endl;
            continue;
        }
        int mini = min(x, y);
        ans = ans + (2 * mini);
        int n = max(x, y) - mini;
        ans++;
        n--;
        ans = ans + (n * 2);
        cout<<ans<<endl;
    }
}

/*
Input
5
5 5
3 4
7 1
0 0
2 0
*/

/*
10
7
13
0
3
*/