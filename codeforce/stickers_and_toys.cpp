/**
 * @file stickers_and_toys.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-11
 * 
 * @copyright Copyright (c) 2023
 * problem : A. Stickers and Toys
 * problem : https://codeforces.com/problemset/problem/1187/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, s, t, ans = 0;
        cin>>n>>s>>t;
        ans = n - min(s, t) + 1;
        cout<<ans<<endl;
    }
}

/*
Input
3
10 5 7
10 10 10
2 1 1

*/

/*
Output
6
1
2

*/