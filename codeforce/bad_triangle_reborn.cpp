/**
 * @file bad_triangle.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1398/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, x, y, z, flag = 0;
        cin>>n;
        cin>>x>>y;
        for (i = 2; i < n; i++) {
            cin>>z;
        }
        if (x + y <= z) {
            cout<<1<<" "<<2<<" "<<n<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
}

/*
Input
3
7
4 6 11 11 15 18 20
4
10 10 10 11
3
1 1 1000000000
*/

/*
Output
2 3 6
-1
1 2 3
*/
