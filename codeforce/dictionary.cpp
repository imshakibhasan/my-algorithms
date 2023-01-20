/**
 * @file dictionary.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-21
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1674/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int a = 0, b = 0, ans = 0;
        char ch1, ch2;
        cin>>ch1>>ch2;
        a = ch1 - 96;
        b = ch2 - 96;
        if (b > a) {
            ans = ((a-1)*25) + (b-1);
        }
        else {
            ans = ((a-1)*25) + b;
        }
        cout<<ans<<endl;
    }
}

/*
Input
7
ab
ac
az
ba
bc
zx
zy
*/

/*
Output
1
2
25
26
27
649
650
*/