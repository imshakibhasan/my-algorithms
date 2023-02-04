/**
 * @file prepend_and_append.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-04
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1791/problem/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, count = 0;
        cin>>n;
        char str[n];
        cin>>str;
        for (i = 0; i < n/2; i++) {
            if ((str[i] == '0' && str[n-1-i] == '1') || (str[i] == '1' && str[n-1-i] == '0')) {
                count++;
            }
            else {
                break;
            }
        }
        cout<<(n-(2*count))<<endl;
    }
}

/*
Input
9
3
100
4
0111
5
10101
6
101010
7
1010110
1
1
2
10
2
11
10
1011011010
*/

/*
Output
1
2
5
0
3
1
0
2
4
*/