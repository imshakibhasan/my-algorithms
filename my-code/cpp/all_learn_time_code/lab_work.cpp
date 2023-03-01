/**
 * @file lab_work.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, k, n;
    cin>>n;
    for (i = 1; i <= n; i++) {
        for (j = n; j > i; j--) {
            cout<<" ";
        }
        for (j = j; j >= 1; j--) {
            cout<<j;
        }
        for (j = 2; j <= i; j++) {
            cout<<j;
        }
        cout<<endl;
    }
    
    for (i = 1; i <= n-1; i++) {
        for (j = 1; j <= i; j++) {
            cout<<" ";
        }
        for (j = n-i; j >= 1; j--) {
            cout<<j;
        }
        for (j = 2; j <= n-i; j++) {
            cout<<j;
        }
        cout<<endl;
    }
    
}