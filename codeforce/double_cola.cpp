/**
 * @file double_cola.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/82/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, r, ans ;
    cin>>n;
    while (n > 5) {
        n = (n / 2) - 2;
    }
    if (n == 5) {
        cout<<"Howard"<<endl;
    }
    else if (n == 4) {
        cout<<"Rajesh"<<endl;
    }
    else if (n == 3) {
        cout<<"Penny"<<endl;
    }
    else if (n == 2) {
        cout<<"Leonard"<<endl;
    }
    else if (n == 1) {
        cout<<"Sheldon"<<endl;
    }
}
