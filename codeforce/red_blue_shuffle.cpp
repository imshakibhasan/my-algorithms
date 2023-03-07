/**
 * @file red_blue_shuffle.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-07
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1459/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, red = 0, blue = 0;
        cin>>n;
        char arr[n], arr1[n];
        cin>>arr;
        cin>>arr1;
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr1[i]) {
                red++;
            }
            else if (arr1[i] > arr[i]) {
                blue++;
            }
        }
        if (red == blue) {
            cout<<"EQUAL"<<endl;
        }
        else if (red > blue) {
            cout<<"RED"<<endl;
        }
        else {
            cout<<"BLUE"<<endl;
        }
    }
}

/*
Input
3
3
777
111
3
314
159
5
09281
09281
*/

/*
Output
RED
BLUE
EQUAL

*/