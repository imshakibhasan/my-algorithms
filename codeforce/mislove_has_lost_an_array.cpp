/**
 * @file mislove_has_lost_an_array.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-08
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1204/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, l, r, mini = 0, maxi = 0, p = 0, k = 1;
    cin>>n>>l>>r;
    p = 0; k = 1;
    for (int i = 1; i <= n; i++) {
        mini = mini + k;
        p++;
        if (p < l) {
            k = 2 * k;
        }
        else {
            k = 1;
        }
    }
    p = 0, k = 1;
    for (int i = 1; i <= n; i++) {
        maxi = maxi + k;
        p++;
        if (p < r) {
            k = 2 * k;
        }
    }
    cout<<mini<<" "<<maxi<<endl;
}

/*
Input
4 2 2

5 1 5
*/

/*
Output
5 7

5 31
*/