/**
 * @file yaisia_and_dice.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-27
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1790/problem/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, s, r, a = 0, coun  = 0, ans = 0, p = 0;
        cin>>n>>s>>r;
        a = s - r;
        if (r % (n-1) == 0) {
            for ( i = 0; i < n-1; i++) {
                cout<<(r/(n-1))<<" ";
            }
            cout<<a<<endl;;
        }
        else {
            p = r % (n-1);
            ans = r / (n-1);
            for ( i = 0; i < (n-1-p); i++) {
                cout<<ans<<" ";
            }
            for (i = 1; i <= p; i++) {
                cout<<(ans+1)<<" ";
            }
            cout<<a<<endl;
        }
    }
}

/*
Input
7
2 2 1
2 4 2
4 9 5
5 17 11
3 15 10
4 4 3
5 20 15
*/

/*
Output
1 1
2 2 
1 2 2 4
6 4 2 3 2
5 5 5
1 1 1 1
1 4 5 5 5
*/