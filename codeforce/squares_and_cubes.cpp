/**
 * @file squares_and_cubes.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-26
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1619/B
 */
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, p, count = 0;
        cin>>n;
        count = pow(n, 0.5);
        p = ceil(pow(n, 0.3333333333));
        count = count;
        for (i = 1; i <= p; i++) {
            if (pow(i, 3) <= n) {
                int x;
                double y;
                x = pow(pow(i, 3), 0.5);
                y = pow(pow(i, 3), 0.5);
                if (abs(x-y) > 0) {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}