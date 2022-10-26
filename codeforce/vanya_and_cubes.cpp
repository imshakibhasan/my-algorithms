/**
 * @file vanya_and_cubes.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-26
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/492/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, sum = 0, i, count = 0, p = 0;
    cin>>n;
    i = 1;
    while (n >= p) {
        sum = sum + i;
        p = p + sum;
        i++;
        count++;
    }
    cout<<count-1<<endl;
}