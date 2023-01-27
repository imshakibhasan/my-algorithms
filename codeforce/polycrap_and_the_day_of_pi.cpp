/**
 * @file polycrap_and_the_day_of_pi.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-27
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1790/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, count = 0;
        char ans[32] = "3141592653589793238462643383279";
        char arr[31];
        cin>>arr;
        n = strlen(arr);
        for (i = 0; i < n; i++) {
            if (arr[i] == ans[i]) {
                count++;
            }
            else {
                break;
            }
        }
        cout<<count<<endl;
    }
}

/*
Input
9
000
3
4141592653
141592653589793238462643383279
31420
31415
314159265358
27182
314159265358979323846264338327
*/

/*
Output
0
1
0
0
3
5
12
0
30
*/