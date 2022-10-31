/**
 * @file accumulation_of_dominos.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1725/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, m, i, j;
    cin>>n>>m;
    if (n == 1 || m == 1) {
        if (n == 1 && m == 1) {
            cout<<"0"<<endl;
        }
        else if (n == 1 && m != 1) {
            cout<<m-1<<endl;
        }
        else {
            cout<<n-1<<endl;
        }
    }
    else {
        cout<<(m-1)*n<<endl;
    }
}