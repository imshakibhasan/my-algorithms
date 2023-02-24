/**
 * @file eleven.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-24
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/918/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, f1 = 1, f2 = 2, v = 0;
    cin>>n;
    //char arr[n];
    //cin>>arr;
    if (n > 2) {
        cout<<"OO";
        for (i = 3; i <= n; i++) {
            if ((f1+f2) == i) {
                cout<<"O";
                v = f1;
                f1 = f2;
                f2 = v + f2;
            }
            else {
                cout<<"o";
            }
        }
    }
    else {
        if (n == 1) {
            cout<<"O"<<endl;
        }
        else {
            cout<<"OO"<<endl;
        }
    }
    cout<<endl;
}

/*
Input
8

15
*/

/*
Output
OOOoOooO

OOOoOooOooooOoo
*/