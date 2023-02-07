/**
 * @file dice_rolling.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-08
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1093/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n < 8) {
            cout<<1<<endl;
        }
        else {
            cout<<ceil(n/7.0)<<endl;
        }
    }
}

/*
Input
4
2
13
37
100
*/

/*
Output
1
3
8
27
*/