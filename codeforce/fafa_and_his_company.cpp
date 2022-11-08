/**
 * @file fafa_and_his_company.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-08
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/935/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, i, count = 0;
    cin>>n;
    for (i = 1; i <= n/2; i++) {
        if ((n-i)% i == 0) {
            count++;
        }
    }
    cout<<count<<endl;
}