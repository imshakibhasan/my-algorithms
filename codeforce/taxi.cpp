/**
 * @file taxi.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-16
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/158/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, count = 0, one = 0, two = 0, three = 0, four = 0, p = 0, q = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
        if (arr[i] == 4) {
            four++;
        }
        else if (arr[i] == 3) {
            three++;
        }
        else if (arr[i] == 2) {
            two++;
        }
        else {
            one++;
        }
    }
    count = count + four;
    count = count + three;
    p = one - three;
    if (p > 0) {
        q = p;
    }
    if (two%2 == 0) {
        count = count + two/2;
        if (q % 4 == 0) {
            count = count + (q/4);
        }
        else {
            count = count + (q/4) + 1;
        }
    }
    else {
        count = count + two/2 + 1;
        q = q - 2;
        if (q > 0) {
            if (q % 4 == 0) {
            count = count + (q/4);
            }
            else {
                count = count + (q/4) + 1;
            }
        }
    }
    cout<<count<<endl;    
}