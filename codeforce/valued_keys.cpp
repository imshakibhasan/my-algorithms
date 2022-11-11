/**
 * @file valued_keys.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-11
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/801/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    char s1[101], s2[101];
    int i, length, count = 0;
    cin>>s1>>s2;
    length = strlen(s1);
    for (i = 0; i < length; i++) {
        if (s2[i] <= s1[i]) {
            count++;
        }
        else {
            cout<<"-1"<<endl;
            break;
        }
    }
    if (count == length) {
        cout<<s2<<endl;
    }
}