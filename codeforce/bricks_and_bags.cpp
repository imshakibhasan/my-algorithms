/**
 * @file bricks_and_bags.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-29
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1740/problem/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, i, sum = 0, flag = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        sum = (arr[n-1] - arr[0]);
        for (i = n-2; i >= 0; i--) {
            if (arr[i] != arr[n-1]) {
                sum = sum + (arr[n-1] - arr[i]);
                flag++;
                break;
            }
        }
        if (flag = 0) {
            sum = sum + + (arr[n-1] - arr[n-2]);
        }
        cout<<sum<<endl;
    }
}