/**
 * @file doors_and_keys.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-24
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1644/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, r = 0, g = 0, b = 0, R = 0, G = 0, B = 0;
        char str[7];
        cin>>str;
        for (i = 0; i < 6; i++) {
            if (str[i] == 'r') {
                r = i;
            }
            else if (str[i] == 'g') {
                g = i;
            }
            else if (str[i] == 'b') {
                b = i;
            }
            else if (str[i] == 'R') {
                R = i;
            }
            else if (str[i] == 'G') {
                G = i;
            }
            else {
                B = i;
            }
        }
        if ((r < R) && (g < G) && (b < B)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
Input
4
rgbBRG
RgbrBG
bBrRgG
rgRGBb
*/

/*
Output
YES
NO
YES
NO
*/