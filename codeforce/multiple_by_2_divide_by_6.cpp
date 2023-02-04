/**
 * @file multiple_by_2_divide_by_6.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-21
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1374/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, count = 0, flag = 0;
        cin>>n;
        while (n > 1) {
            if (n % 6 == 0) {
                n = n / 6;
                count++;
            }
            else if (n % 6 == 3) {
                n = n * 2;
                count++;
            }
            else {
                flag++;
                break;
            }
        }
        if (flag > 0) {
            cout<<"-1"<<endl;
        }
        else {
            cout<<count<<endl;
        }
    }
}

/*
Input
7
1
2
3
12
12345
15116544
387420489
*/

/*
Output
0
-1
2
-1
-1
12
36
*/