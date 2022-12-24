/**
 * @file average_height.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-24
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1509/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (i = 0; i < n; i++) {
            if (arr[i]%2 != 0) {
                cout<<arr[i]<<" ";
            }
        }
        for (i = 0; i < n; i++) {
            if (arr[i]%2 == 0) {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
}
/*
input
4
3
1 1 2
3
1 1 1
8
10 9 13 15 3 16 9 13
2
18 9
*/

/*
output
1 1 2 
1 1 1 
13 9 13 15 3 9 16 10 
9 18 
*/