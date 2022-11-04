/**
 * @file margarite_and_the_best_present.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-03
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1080/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while (q--) {
        long long int l, r, sum = 0;
        cin>>l>>r;
        if (l%2 == 0 && r%2 == 0) {
            sum = r + l;
            cout<<sum/2<<endl;
        }
        else if (l%2 != 0 && r%2 != 0){
            sum = (-r -l);
            cout<<sum/2<<endl;
        }
        else if (l%2 == 0 && r%2 != 0) {
            sum = (l - r) + (-1);
            cout<<sum/2<<endl;
        }
        else {
            sum = (r - l) + 1;
            cout<<sum/2<<endl;
        }
    }
}