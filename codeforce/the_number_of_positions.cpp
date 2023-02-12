/**
 * @file the_number_of_positions.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-13
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/124/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b, ans = 0;
    cin>>n>>a>>b;
    ans = min((n-a), b+1);
    cout<<ans<<endl;
}

/*Input
3 1 1
5 2 3
*/

/*
2
3
*/