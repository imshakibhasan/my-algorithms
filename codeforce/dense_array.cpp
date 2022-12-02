/**
 * @file dense_array.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-02
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1490/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, count = 0, a , b;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (i = 0; i < n - 1; i++) {
            a = arr[i];
            b = arr[i+1];
            if (b > (2*a)) {            
                while (b > (2*a)) {
                    a = 2*a;
                    count++;
                }
            }
            else if (a > (2*b)) {
                while (a > (2*b)) {
                    a = ceil(a/2.0);
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}