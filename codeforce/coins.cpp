/**
 * @file coins.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-06
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/contest/1814/problem/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int k, n;
        cin>>n>>k;
        if (n % 2 == 0) {
            cout<<"YES"<<endl;
        }
        else if (k % 2 == 1) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
Input
4
5 3
6 1
7 4
8 8
*/

/*
Output
YES
YES
NO
YES
*/