/**
 * @file mark_the_photographer.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (cpp) 2022
 * problem : https://codeforces.com/problemset/problem/1705/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, x, i, m, flag = 0;
        cin>>n>>x;
        m = (2*n);
        int arr[m];
        for (i = 0; i < (m); i++) {
            cin>>arr[i];
        }
        sort(arr, arr+m);
        for (i = 0; i < n; i++) {
            if (arr[(n+i)] - arr[i] < x) {
                cout<<"NO"<<endl;
                flag++;
                break;
            }
        }
        if (flag == 0) {
            cout<<"YES"<<endl;
        }
    }
}