/**
 * @file little_c_loves_3.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-25
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1047/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, ans = 0, r = 0;
    cin>>n;
    if (n%3 == 0 || n%3 == 1) {
        cout<<"1 1"<<" "<<n-2<<endl;
    }
    else {
        cout<<"1 2"<<" "<<n-3<<endl;
    }
}

/*
Input
3

233
*/

/*
Output
1 1 1
77 77 79
*/