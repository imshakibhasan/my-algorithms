/**
 * @file epic_game.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-31
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/119/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, ans = 0, s = 0, as = 0, r = 0;
    cin>>a>>b>>c;
    while (c > 0) {
        if (a < c) {
            r = a;
        }
        else {
            r = c;
        }
        while (r > 0) {
            if (c % r == 0 && a % r == 0) {
                c = c - r;
                s++;
                break;
            }
            else {
                r--;
            }
        }
        if (b < c) {
            r = b;
        }
        else {
            r = c;
        }
        while (r > 0) {
            if (c % r == 0 && b % r == 0) {
                c = c - r;
                as++;
                break;
            }
            else {
                r--;
            } 
        }
    }
    if (s > as) {
        cout<<"0"<<endl;
    }
    else {
        cout<<"1"<<endl;
    }
}

/*
Input
3 5 9
1 1 100
*/

/*
Output
0
1
*/