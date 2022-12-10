/**
 * @file counting_kangarous_is_fun.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-10
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/372/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int i, j, n, count;
    cin>>n;
    long long int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    j = n - 1; 
    count = 0;
    for (i = j - 1; i >= 0; i--) {
        if (arr[j] >= arr[i]*2) {
            count++;
            j--;
        }
    }
    if (n%2 == 0) {
        if (count > (n/2)) {
            cout<<n/2<<endl;
        }
        else {
            cout<<n-count<<endl;
        }
    }
    else {
        if (count > n / 2) {
			cout << (n / 2 + 1) << endl;
        }
        else {
			cout << (n - count) << endl;
        }
    }
}