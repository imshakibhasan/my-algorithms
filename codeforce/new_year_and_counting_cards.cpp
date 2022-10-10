/**
 * @file new_year_and_counting_cards.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-02
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/908/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i = 0, count = 0, length;
    char str[51];
    cin>>str;
    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == '1' || str[i] == '3' || str[i] == '5' || str[i] == '7' || str[i] == '9') {
            count++;
        }
        i++;
    }
    cout<<count;
}