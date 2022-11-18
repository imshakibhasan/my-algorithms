/**
 * @file die_roll.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-18
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/9/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int y , w, d;
    cin>>y>>w;
    d = max(y, w);
    d = (6-d) + 1;
    if (d == 1) {
        cout<<"1/6"<<endl;
    }
    else if (d == 2) {
        cout<<"1/3"<<endl;
    }
    else if (d == 3) {
        cout<<"1/2"<<endl;
    }
    else if (d == 4) {
        cout<<"2/3"<<endl;
    }
    else if (d == 5) {
        cout<<"5/6"<<endl;
    }
    else if (d == 6) {
        cout<<"1/1"<<endl;
    }
}