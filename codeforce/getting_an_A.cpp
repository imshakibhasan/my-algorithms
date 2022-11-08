/**
 * @file getting_an_A.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-07
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/991/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, sum = 0, count = 0;
    float r;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    r = (float) sum/n;
    sort(arr, arr+n);
    if (r >= 4.5) {
        cout<<"0"<<endl;
    }
    else {
        float p = (4.5*n) - sum;
        for (i = 0; i < n; i++) {
            if (p > 0) {
                p = p - (5-arr[i]);
                count++;
            }
            else {
                break;
            }
        }
    cout<<count<<endl;    
    }
}