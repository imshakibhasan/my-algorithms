/**
 * @file che.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-04
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1223/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while (q--) {
        long long int n;
        cin>>n;
        if (n == 2) {
            cout<<"2"<<endl;
            continue;
        }
        if (n%2 == 0) {
            cout<<"0"<<endl;
        }
        else {
            cout<<"1"<<endl;
        }
    }
}
/*
Input
4
2
5
8
11
*/

/*
Output
2
1
0
1
*/