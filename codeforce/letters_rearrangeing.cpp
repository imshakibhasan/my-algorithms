/**
 * @file letters_rearrangeing.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1093/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    char str[1001];
    while (t--) {
        int i, length, count = 1, flag = 0;
        cin>>str;
        length = strlen(str);
        sort(str, str+length);
        //cout << str;
        for (i = 0; i < length; i++) {
            if (str[i] != str[i+1]) {
                flag++;
                break;
            }
            else {
                count++;
            }
        }
        if (count == length) {
            cout<<"-1"<<endl;
        }
        else {
            char temp = str[0];
            str[0] = str[length-1];
            str[length-1] = temp;
            cout<<str<<endl;
        }
    }
}