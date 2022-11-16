/**
 * @file linear_keyboard.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-16
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1607/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, x = 0, y = 0, length, time = 0;
        char key[26], str[51];
        cin>>key;
        cin>>str;
        length = strlen(str);
        for (i = 0; i < length; i++) {
            for (int j = 0; j < 26; j++) {
                if (key[j] == str[i]) {
                    if (i == 0) {
                        x = j + 1;
                        y = j + 1;
                    }
                    else {
                        y = j + 1;
                        time = time + abs(x-y);
                        x = y;
                    }
                    break;
                }
            }
        }
        cout<<time<<endl;
    }
}
/*
5
abcdefghijklmnopqrstuvwxyz
hello
abcdefghijklmnopqrstuvwxyz
i
abcdefghijklmnopqrstuvwxyz
codeforces
qwertyuiopasdfghjklzxcvbnm
qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq
qwertyuiopasdfghjklzxcvbnm
abacaba
*/