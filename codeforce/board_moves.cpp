/**
 * @file board_moves.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-17
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1353/C
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) { 
        long long n;
        cin>>n;
        cout<<n*(n+1)*(n-1)/3<<endl;
    }
}

/*
INput
3
1
5
499993
*/

/*
Output
0
40
41664916690999888
*/