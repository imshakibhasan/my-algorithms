/**
 * @file chat_room.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-13
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/58/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, x = 0, y = 0;
    string s = "hello";
    char arr[101];
    cin>>arr;
    n = strlen(arr);
    for (i = 0; i < n; i++) {
        if (arr[i] == s[x]) {
            x++;
            y++;
        }
    }
    if (y == 5) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}