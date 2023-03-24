/**
 * @file garland.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1809/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        char arr[4];
        cin>>arr;
        sort(arr, arr+4);
        if (arr[0] == arr[3]) {
            cout<<"-1"<<endl;
        }
        else if (arr[0] == arr[2] || arr[1] == arr[3]) {
            cout<<"6"<<endl;
        }
        else {
            cout<<"4"<<endl;
        }
    }
}

/*
INput
3
9546
0000
3313
*/

/*
Output
4
-1
6
*/