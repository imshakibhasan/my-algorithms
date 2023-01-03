/**
 * @file rewards.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-02
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/448/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a1, a2, a3, a, b, b1, b2, b3, n, p = 0, q = 0, ans = 0;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;
    a = a1 + a2 + a3;
    b = b1 + b2 + b3;
    p = ceil(a / 5.0);
    q = ceil(b / 10.0);
    ans = p + q;
    if (ans <= n) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

/*
Input:
1 1 1
1 1 1
4
1 1 3
2 3 4
2
1 0 0
1 0 0
1

Output:
YES
YES
NO
*/