/**
 * @file vasya_and_choclate.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-02
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1065/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int s, a, b, c, x = 0, free = 0;
        cin>>s>>a>>b>>c;
        x = s / (a*c);
        free = x * b;
        free = free + (s/c);
        cout<<free<<endl;
    }
}

/*
Input
2
10 3 1 1
1000000000 1 1000000000 1
*/

/*
Output
13
1000000001000000000
*/