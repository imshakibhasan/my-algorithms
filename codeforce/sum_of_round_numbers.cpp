/**
 * @file sum_of_round_numbers.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-19
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1352/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, p, r, count = 0, digit = 0;
        cin>>n;
        p = n;
        while (n > 0) {
            r = n % 10;
            if (r > 0) {
                count++;
            }
            n = n / 10;
        }
        cout<<count<<endl;
        count = 0;
        while (p > 0) {
            r = p % 10;
            count++;
            digit = count;
            if (r > 0) {
                cout<<r;
                digit--;
                while (digit > 0) {
                    cout<<"0";
                    digit--;
                }
                cout<<" ";
            }
            p = p / 10;
        }
        cout<<endl;
    }
}

/*
Input
5
5009
7
9876
10000
10
*/

/*
Output
2
5000 9
1
7 
4
800 70 6 9000 
1
10000 
1
10 
*/