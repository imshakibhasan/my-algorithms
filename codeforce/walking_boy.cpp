/**
 * @file walking_boy.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-19
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1776/problem/A
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
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        if ((arr[0] - 0) >= 120) {
            count = count + ((arr[0] - 0)/120);
        } 
        if ((1440 - arr[n-1]) >= 120) {
            count = count + ((1440 - arr[n-1])/120);
        }
        for (i = 1; i < n; i++) {
            if ((arr[i] - arr[i-1])/120 >= 1) {
                count = count + ((arr[i] - arr[i-1])/120);
                if (count >= 2) {
                    break;
                }
            }
        }
        if (count >= 2) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
Input
6
14
100 200 300 400 500 600 700 800 900 1000 1100 1200 1300 1400
12
100 200 300 400 600 700 800 900 1100 1200 1300 1400
13
100 200 300 400 500 600 700 800 900 1100 1200 1300 1400
13
101 189 272 356 463 563 659 739 979 1071 1170 1274 1358
1
42
5
0 1 2 3 4
*/

/*
Output
NO
YES
NO
YES
YES
YES
*/