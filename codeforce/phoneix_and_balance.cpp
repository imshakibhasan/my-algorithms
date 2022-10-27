/**
 * @file square_weights.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
//https://codeforces.com/problemset/problem/1348/A
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i, sum1 = 0, sum2 = 0;
        cin>>n;
        for (i = 1; i <= n; i++) {
            if (i < n/2 || i == n) {
                sum1 = sum1 + (pow(2, i));
            }
            else {
                sum2 = sum2 + (pow(2, i));
            }
        }
        cout<<sum1 - sum2<<endl;
    }
}