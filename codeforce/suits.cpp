/**
 * @file suits.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-02
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1271/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int a, b, c, d, e, f, cost = 1000000000, cost1 = 0, cost2 = 0, x, y, p, q, r, z;
    cin>>a>>b>>c>>d>>e>>f;
    r = a; z = d;
    x = min(b, min(c, d));
    p = min(a, d);
    cost2 = p * e;
    cost1 = x * f;
    r = r - p; 
    z = z - p;
    q = min(b, min(c, z));
    cost2 = cost2 + (q * f);
    b = b - x;
    c = c - x;
    d = d - x;
    y = min(a, d);
    cost1 = cost1 + (y * e);
    cost = max(cost1, cost2);
    cout<<cost<<endl;
}

/*
Input
4
5
6
3
1
2

12
11
13
20
4
6
*/

/*
Output

6

102

*/