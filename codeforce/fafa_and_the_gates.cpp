/**
 * @file fafa_and_the_gates.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-10
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/935/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, x = 0, y = 0, count = 0;
    cin>>n;
    char str[n];
    cin>>str;
    for (i = 0; i < n-1; i++) {
        if (str[i] == 'U') {
            x = x + 1;
        }
        else {
            y = y + 1;
        }
        if ((x == y) && str[i] == str[i+1]) {
            count++;
        }
    }
    cout<<count<<endl;
}
/*
int main() {
    int n, count = 0;
    cin>>n;
    char str[n];
    cin>>str;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'U') {
            count++;
        }
        for (int j = 0; j < n; j++) {

        }
    }
}
*/