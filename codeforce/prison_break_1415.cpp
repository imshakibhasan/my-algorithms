/**
 * @file prison_break_1415.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-22
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1415/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, m, r, c, d, ans = 0;
        cin>>n>>m>>r>>c;
        d = abs(r-1) + abs(c-1);
        ans = max(ans, d);
        d = abs(r-1) + abs(c-m);
        ans = max(ans, d);
        d = abs(r-n) + abs(c-1);
        ans = max(ans, d);
        d = abs(r-n) + abs(c-m);
        ans = max(ans, d);
        cout<<ans<<endl;
    }
}

/*
INput
3
10 10 1 1
3 5 2 4
10 2 5 1
*/

/*
Output
18
4
6
*/