/**
 * @file qaq.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-02
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/894/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, k, length, count = 0;
    char arr[101];
    cin>>arr;
    length = strlen(arr);
    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length; j++) {
            for (k = j + 1; k < length; k++) {
                if (arr[i] == 'Q' && arr[j] == 'A' && arr[k] == 'Q') {
                    count++;
                }
            }
        }
    }
    cout<<count;
}