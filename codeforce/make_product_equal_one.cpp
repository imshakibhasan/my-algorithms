/**
 * @file make_product_equal_one.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-31
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1206/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, i, count1 = 0, count2 = 0, sum = 0;
    cin>>n;
    long long int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
        if (arr[i] < 0) {
            count1++;
        }
    }
    sort(arr, arr+n);
    if (count1 % 2 == 0) {
        for (i = 0; i < n; i++) {
            if (i < count1) {
                sum = sum + (-1 - arr[i]);
                continue;
            }
            sum = sum + abs(arr[i] - 1);
        }
    }
    else {
        for (i = 0; i < n; i++) {
            if (i < count1) {
                sum = sum + (-1 - arr[i]);
                continue;
            }
            if ( i == count1) {
                sum = sum + abs(-1 - arr[i]);
                continue;
            }
            sum = sum + abs(arr[i] - 1);
        }
    }
    if(n%2 != 0 && count1 == n) {
        cout<<sum+2;
    }
    else {
        cout<<sum<<endl;
    }
}