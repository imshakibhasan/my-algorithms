/**
 * @file three_pairwise_maximums.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-19
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1385/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, x, y, z;
        cin>>x>>y>>z;
        if (x == y && y == z) {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else if (x == z && y < x) {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<1<<endl;
        }
        else if (y == z && x < y) {
            cout<<"YES"<<endl;
            cout<<x<<" 1 "<<y<<endl;
        }
        else if (x == y && z < x) {
            cout<<"YES"<<endl;
            cout<<z<<" "<<x<<" "<<z<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
Input
5
3 2 3
100 100 100
50 49 49
10 30 20
1 1000000000 1000000000
*/

/*
Output
YES
3 2 1
YES
100 100 100
NO
NO
YES
1 1 1000000000
*/