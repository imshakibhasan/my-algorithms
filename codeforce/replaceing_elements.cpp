/**
 * @file replaceing_elements.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-20
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1473/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, d, i, flag = 0;
        cin>>n>>d;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] > d) {
                flag++;
            }
        }
        if (flag == 0) {
            cout<<"YES"<<endl;
        }
        else {
            sort(arr, arr+n);
            if (arr[0] + arr[1] <= d) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
}