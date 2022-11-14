/**
 * @file casimir_s_string_solitiare.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1579/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, length, count_A = 0, count_B = 0, count_C = 0;
        char str[51];
        cin>>str;
        length = strlen(str);
        for (i = 0; i < length; i++) {
            if (str[i] == 'A') {
                count_A++;
            }
            else if (str[i] == 'B') {
                count_B++;
            }
            else if (str[i] == 'C'){
                count_C++;
            }
        }
        if (count_A + count_C == count_B) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}