/**
 * @file bun_lover.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-01
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1822/C
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n;
        cin>>n;
        n++;
        cout<<(n*n)+1<<endl;
    }
}

/*
Input
4
4
5
6
179179179
*/

/*
Output
26
37
50
32105178545472401
*/