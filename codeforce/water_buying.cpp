/**
 * @file water_buying.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-04
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1118/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while (q--) {
        long long int n, a, b, s = 0, t  = 0, u = 0;
        cin>>n>>a>>b;
        s = n * a;
        if (n%2 == 0) {
            t = (n/2) * b;
        }
        else {
            t = ((n/2) * b) + a;
        }
        u = min(s, t);
        cout<<u<<endl;
    }
}
/*
Input
4
10 1 3
7 3 2
1 1000 1
1000000000000 42 88
*/

/*
Output
10
9
1000
42000000000000
*/