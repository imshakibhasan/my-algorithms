/**
 * @file hossam_and_combinatories.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-11
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1771/problem/A
 * 
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, i, count_max = 0,count_min = 0, count = 0, min = 100000, max = 0;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i] < min) {
                min = arr[i];
            }
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        for (i = 0; i < n; i++) {
            if (arr[i] == max) {
                count_max++;
            }
            if (arr[i] == min) {
                count_min++;
            }
        }
        if (count_max != n || count_min != n) {
            count = count_max * count_min;
            cout<<(2*(count))<<endl;
        }
        else if (count_max == n || count_min == n) {
            cout<<pow(count_max, 2) - count_max<<endl;
        }
    }
}