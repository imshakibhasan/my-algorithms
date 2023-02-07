/**
 * @file petya_and_origami.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-08
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1080/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    double n, k;
    long long int ans = 0;
    cin>>n>>k;
    ans = ans + ceil((n*2)/k);
    ans = ans + ceil((n*5)/k);
    ans = ans + ceil((n*8)/k);
    cout<<ans<<endl; 
}

/*
Input
3 5

15 6
*/

/*Output
10

38
*/