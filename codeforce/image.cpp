/**
 * @file image.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-30
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1721/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, count = 0;
        char str[4];
        cin>>str[0]>>str[1];
        cin>>str[2]>>str[3];
        for (i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                    if (str[i] == str[j]) {
                    count++;
                    break;
                }
            }
        }
        if (count == 3) {
            cout<<"0"<<endl;
        }
        else if (count == 2) {
            cout<<"1"<<endl;
        }
        else if (count == 1) {
            cout<<2<<endl;
        }
        else {
            cout<<"3"<<endl;
        }
    }
}