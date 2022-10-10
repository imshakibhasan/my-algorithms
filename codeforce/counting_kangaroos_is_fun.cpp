/**
 * @file counting_kangaroos_is_fun.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/372/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i, count = 0, max = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > max/2) {
            count++;
        }
    }
    cout<<count;
}