/**
 * @file honest_coach.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-22
 * 
 * @copyright Copyright (cpp) 2022
 * problem : https://codeforces.com/problemset/problem/1360/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i, j, max = 1000;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (i = 0; i < n-1; i++) {
            for (j = i + 1; j < n; j++) {
                if (abs(arr[i] - arr[j]) < max) {
                    max = abs(arr[i] - arr[j]);
                }
            }
        }
        cout<<max<<endl;
    }
}
