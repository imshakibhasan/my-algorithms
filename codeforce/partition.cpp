/**
 * @file partition.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-02
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/946/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, x, sum1 = 0, sum2 = 0;
    cin>>n;
    for (i = 0; i < n; i++) {
        cin>>x;
        if (x > 0) {
            sum1 = sum1 + x;
        }
        else {
            sum2 = sum2 + x;
        }
    }
    cout<<(sum1 - sum2)<<endl;
}

/*
Input
3
1 -2 0

6
16 23 16 15 42 8

*/

/*
Output
3

120
*/