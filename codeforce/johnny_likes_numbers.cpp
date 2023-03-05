/**
 * @file johnny_likes_numbers.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-05
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/678/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, k;
    cin>>n>>k;
    n++;
    int r = n % k;
    if (r == 0) {
        cout<<n<<endl;
    }
    else {
        r = n / k;
        cout<<(k*(r+1))<<endl;
    }
}

/*
Input
5 3

25 13

26 13
*/

/*
Output
6
26
39
*/