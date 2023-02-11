/**
 * @file luntik_and_concerts.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-08
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1582/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, a, b, c, total = 0;
        cin>>a>>b>>c;
        total = a + (b * 2) + (c * 3);
        if (total % 2 == 0) {
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
1 1 1
2 1 3
5 5 5
1 1 2
*/

/*
Output
0
1
0
1
*/