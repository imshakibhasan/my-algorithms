/**
 * @file matrix_rotation.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-19
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1772/problem/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int a1, a2, b1, b2, n = 4, p = 0, flag = 0;
        cin>>a1>>a2>>b1>>b2;
        while (n--) {
            if ((a1 < a2 && a1 < b1 && b1 < b2 && a2 < b2)) {
                flag++;
                break;
            }
            else {
                p  = a1;
                a1 = b1;
                b1 = b2;
                b2 = a2;
                a2 = p;
            }
        }
        if (flag > 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
6
1 3
5 7
8 10
3 4
8 10
4 3
6 1
9 2
7 5
4 2
1 2
4 3
*/