/**
 * @file shotting.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-31
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1216/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, sum = 0, i;
    cin>>n;
    long long int arr[n], res[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
        res[i] = arr[i];
    }
    sort(res, res+n);
    int r = 0;
    for (i = n-1; i >= 0; i--) {
        sum = sum + ((res[i] * r) + 1);
        r++;
    }
    cout<<sum<<endl;
    for (i = n-1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (res[i] == arr[j]) {
                cout<<j+1<<" ";
                arr[j] = 0;
                break;;
            }
        }
    }
    cout<<endl;
}