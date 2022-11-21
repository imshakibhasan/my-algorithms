/**
 * @file ordinary_numbers.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-27
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1520/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i = 0, n, r = 0, q = 0, ans = 0, flag = 0, digit = 0, p;
        cin>>n;
        p = n;
        while (p > 0) {
            r = p % 10;
            p = p / 10;
            digit++;
        }
        ans = ((digit-1) * 9) + (r - 1);
        p = n;
        int arr[digit];
        i = digit - 1;
        while (p > 0) {
            q = p % 10;
            p = p / 10;
            arr[i] = q;
            i--; 
        }
        for (int j = 0; j < digit; j++) {
            if (arr[j+1] < arr[j]) {
                flag++;
                break;
            }
        }
        if (flag == 0) {
            ans++;
            cout<<ans<<endl;
        }
        else {
            cout<<ans<<endl;
        }

    }
}