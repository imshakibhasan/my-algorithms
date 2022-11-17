/**
 * @file vus_and_cossack_and_a_contest.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-17
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1186/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k;
    cin>>n>>m>>k;
    if (n <= min(m, k)) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
}