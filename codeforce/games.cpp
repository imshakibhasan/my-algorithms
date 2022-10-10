/**
 * @file games.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/268/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i, j, count = 0;
    cin>>n;
    int arr1[n], arr2[n];
    for (i = 0; i < n; i++) {
        cin>>arr1[i]>>arr2[i];
        for (j = 0; j < i; j++) {
            if (arr1[i] == arr2[j]) {
                count++;
            }
            if (arr2[i] == arr1[j]) {
                count++;
            }
        }
    }
    cout<<count;
}