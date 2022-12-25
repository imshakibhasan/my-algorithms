/**
 * @file puzzle_pieces.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-25
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1345/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        if ((n>=3 && m>1) || (m>=3 && n>1)) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
}
/*
Input
3
1 3
100000 100000
2 2
*/

/*
Output
YES
NO
YES
*/