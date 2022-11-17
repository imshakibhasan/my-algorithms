/**
 * @file who_s_opposite.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-17
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1560/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int a, b, c, x, y, people;
        cin>>a>>b>>c;
        x = abs(a-b);
        people = abs(a-b)*2;
        if (x == 1 || a > people || b > people) {
            cout<<"-1"<<endl;
            continue;
        }
        if (people >= c) {
            if (c <= people/2) {
                cout<<c+people/2<<endl;
            }
            else {
                y = people - c;
                c = people/2 - y;
                cout<<c<<endl;
            }
        }
        else {
            cout<<"-1"<<endl;
        }
    }
}