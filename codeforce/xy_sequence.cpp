/**
 * @file xy_sequence.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-21
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1657/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, B, x, y, sum = 0, value = 0;
        cin>>n>>B>>x>>y;
        while (n--) {
            if ((value + x) <= B) {
                value = value + x;
                sum = sum + value;
            }
            else {
                value = value - y;
                sum = sum + value;
            }
        }
        cout<<sum<<endl;
    }
}

/*
Input
3
5 100 1 30
7 1000000000 1000000000 1000000000
4 1 7 3
*/

/*
Output
15
4000000000
-10
*/