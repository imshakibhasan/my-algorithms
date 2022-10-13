/**
 * @file anton_and_digits.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-12
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/734/B
 */
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int k2, k3, k5, k6, ans, pas, sum;
    cin>>k2>>k3>>k5>>k6;
    ans = min(k2, min(k5, k6));
    k2 = k2 - ans;
    k3 = k3 - ans;
    pas = min(k2, k3);
    sum = (ans*256) + (pas*32);
    cout<<sum;
}
*/
#include <iostream>
using namespace std;
int k2, k3, k5, k6, ans, pas;
int main() {
    cin >> k2 >> k3 >> k5 >> k6;
    ans = min(k2, min(k5, k6));
    k2 -= ans;
    k5 -= ans;
    k6 -= ans;
    pas = min(k2, k3);
    cout << (ans * 256) + (pas * 32);
}