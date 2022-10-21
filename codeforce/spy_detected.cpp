/**
 * @file spy_detected.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-24
 * 
 * @copyright Copyright (cpp) 2022
 * problem : https://codeforces.com/problemset/problem/1512/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int n, j;
        cin>>n;
        int arr[n];
        for (j = 0; j < n; j++) {
            cin>>arr[j];
        }
        for (j = 1; j < n; j++) {
            if (arr[j] != arr[j-1] && arr[j]==arr[j+1]) {
                cout<<j<<endl;
                break;
            }
            else if (arr[j] != arr[j-1] && arr[j] != arr[j+1]) {
                cout<<j+1<<endl;
                break;
            }
            else if (arr[j] == arr[j-1] && arr[j] !=arr[j+1]) {
                cout<<j+2<<endl;
                break;
            }
        }
    }
}
