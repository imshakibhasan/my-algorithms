/**
 * @file sereja_and_dima.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-28
 * 
 * @copyright Copyright (cpp) 2022
 * problem : https://codeforces.com/problemset/problem/381/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n,seerja = 0, dima = 0, count = 1;
    cin>>n;
    int arr[n];
    for(i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for(i = 0; i < n; i++) {
        if(arr[i] > arr[n-1])
        {
            if(count % 2 != 0) {
                seerja = seerja + arr[i];
            }
            else {
                dima = dima + arr[i];
            }
            count++;
        }
        else {
            if(count % 2 != 0) {
                seerja = seerja + arr[n-1];
            }
            else {
                dima = dima + arr[n-1];
            }
            n--;
            i--;
            count++;
        }
    }
    cout<<seerja<<" "<<dima<<endl;
}