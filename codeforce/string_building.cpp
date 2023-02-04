/**
 * @file string_building.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-29
 * 
 * @copyright Copyright (c) 2023
 * problem  : https://codeforces.com/problemset/problem/1671/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, count = 1, ans = 51;
        char str[51];
        cin>>str;
        n = strlen(str);
        if (n == 1 || (str[n-1] != str[n-2])) {
            cout<<"NO"<<endl;
            continue;
        }
        for (i = 0; i < n-1; i++) {
            if (str[i] == str[i+1]) {
                count++;
            }
            else {
                ans = min(count, ans);
                count = 1;
            }
        }
        if (ans == 1) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
}

/*
Input
8
aaaabbb
bbaaaaabbb
aaaaaa
abab
a
b
aaaab
bbaaa
*/

/*
Output
YES
YES
YES
NO
NO
NO
NO
YES
*/