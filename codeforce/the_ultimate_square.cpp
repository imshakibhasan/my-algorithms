/**
 * @file the_ultimate_square.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-12
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1748/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        if (n%2 == 0) {
            cout<<n/2<<endl;
        }
        else {
            cout<<(n/2)+1<<endl;
        }
    }
}
/*
#include<stdio.h>
#include<math.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long double n, p;
        scanf("%Lf", &n);
        p = ceil(n/2);
        printf("%.0Lf\n", p);
    }
    return 0;
}
*/