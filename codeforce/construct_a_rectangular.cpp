/**
 * @file construct_a_rectangular.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-27
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1622/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr, arr+3);
        if ((arr[0] + arr[1]) == arr[2] ) {
            cout<<"YES"<<endl;
        }
        else if ((arr[0] == arr[1]) && (arr[2]%2 == 0)) {
            cout<<"YES"<<endl;
        }
        else if ((arr[1] == arr[2]) && (arr[0]%2==0)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}