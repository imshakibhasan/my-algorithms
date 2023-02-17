/**
 * @file two_towers.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-16
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1795/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j, n, m, count = 0;
        cin>>n>>m;
        string a, b;
        cin>>a;
        cin>>b;
        reverse(b.begin(),b.end());
        a = a + b;
        for (i = 0; i < (n+m)-1; i++) {
            if (a[i] == a[i+1]) {
                count++;
            }
        }
        if (count > 1) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
}

/*
Input
4
4 3
BRBB
RBR
4 7
BRBR
RRBRBRB
3 4
RBR
BRBR
5 4
BRBRR
BRBR
*/

/*
Output
YES
YES
YES
NO
*/