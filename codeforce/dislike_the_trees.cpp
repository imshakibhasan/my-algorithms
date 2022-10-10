/**
 * @file dislike_the_trees.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1560/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, i, j, count = 0;
    cin>>t;
    for (i = 0; i < t; i++) {
        cin>>n;
        j = 1;
        count = 0;
        while(1) {
            if (j % 3 != 0 && j%10 != 3) {
                count++;
            }
            if (count == n) {
                cout<<j<<endl;
                break;
            }
            j++;
        }
    }
}