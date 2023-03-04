/**
 * @file four_segments.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-04
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1468/E
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int arr[4], ans = 0;
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        sort(arr, arr+4);
        ans = arr[0] * arr[2];
        cout<<ans<<endl;
    }
}

/*
Input
4
1 2 3 4
5 5 5 5
3 1 4 1
100 20 20 100
*/

/*
Output
3
25
3
2000
*/