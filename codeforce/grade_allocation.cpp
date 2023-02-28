/**
 * @file grade_allocation.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-01
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1316/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, m, x, sum = 0;
        cin>>n>>m;
        for (i = 0; i < n; i++) {
            cin>>x;
            sum = sum + x;
        }
        if (sum > m) {
            cout<<m<<endl;
        }
        else {
            cout<<sum<<endl;
        }
    }
}

/*
INput
2
4 10
1 2 3 4
4 5
1 2 3 4
*/

/*
Output
10
5

*/

