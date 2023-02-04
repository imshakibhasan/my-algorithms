/**
 * @file following_directions.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-04
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1791/problem/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, x = 0, y = 0, flag = 0;
        cin>>n;
        char arr[n];
        cin>>arr;
        for (i = 0; i < n; i++) {
            if (arr[i] == 'L') {
                x = x - 1;
            }
            else if (arr[i] == 'R') {
                x = x + 1;
            }
            else if (arr[i] == 'U') {
                y = y + 1;
            }
            else {
                y = y - 1;
            }
            if (x == 1 && y == 1) {
                flag++;
                break;
            }
        }
        if (flag > 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
Input
7
7
UUURDDL
2
UR
8
RRRUUDDD
3
LLL
4
DUUR
5
RUDLL
11
LLLLDDRUDRD
*/

/*
Output
YES
YES
NO
NO
YES
YES
NO
*/