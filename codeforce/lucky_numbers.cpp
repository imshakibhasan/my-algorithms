/**
 * @file lucky_numbers.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-07
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/630/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n;
    long long sum = 0;
    cin>>n;
    for (i = 0; i < n; i++) {
        sum = sum + pow(2, (n-i));
    }
    cout<<sum<<endl;
}

/*Input
2
*/

/*Output
6
*/