/**
 * @file key_races.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-03
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/835/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int s, v1, v2, t1, t2, f1 = 0, f2 = 0;
    cin>>s>>v1>>v2>>t1>>t2;
    f1 = (v1 * s) + (2 * t1);
    f2 = (v2 * s) + (2 * t2);
    if (f1 < f2) {
        cout<<"First"<<endl;
    }
    else if (f1 > f2) {
        cout<<"Second"<<endl;
    }
    else {
        cout<<"Friendship"<<endl;
    }
}