/**
 * @file minority.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-24
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1633/B
 */
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int i, zero = 0, one = 0;
        string s;
        cin>>s;
        for(i=0; i<s.size(); i++) {
            if(s[i]=='0')
                zero++;
             else
            one++;
        }
        if(zero != one) {
            cout<<min(zero, one)<<endl;
        }
        else {
            cout<<zero-1<<endl;
        }
    }
}
/*
Input
4
01
1010101010111
00110001000
1
*/

/*
Output
0
5
3
0
*/