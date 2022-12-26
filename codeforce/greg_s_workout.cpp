/**
 * @file greg_s_workout.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-26
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/255/A
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, t, a = 0, b = 0, c = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        if (i % 3 == 1) {
            a += t;
        }
        else if (i % 3 == 2) {
            b += t;
        }
        else {
            c += t;
        }
    }
    if (a > b && a > c) {
        cout<<"chest"<<endl;
    }
    else if (b > a && b > c) {
        cout<<"biceps"<<endl;
    }
    else {
        cout<<"back"<<endl;
    }
    return 0;
}
 