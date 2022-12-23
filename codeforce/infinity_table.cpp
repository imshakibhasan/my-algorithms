/**
 * @file infinity_table.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-23
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1560/C
 */
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long double i, k, ans = 0, value = 0, flag = 0;
        cin>>k;
        ans = ceil(sqrt(k));
        value = ans * ans;
        for (i = ans; i <= ans; i++) {
            for (int j = 1; j <= ans; j++) {
                if (value == k) {
                    cout<<i<<" "<<j<<endl;
                    flag++;
                    break;
                }
                value--;
            }
            if (flag > 0) {
                break;
            }
        }
        if (flag == 0) {
            for (i = ans-1; i >= 1; i--) {
                for (int j = ans; j <= ans; j++) {
                    if (value == k) {
                        cout<<i<<" "<<j<<endl;
                        flag++;
                        break;
                    }
                    value--;
                }
                if (flag > 0) {
                    break;
                }
            }
        }
    }
}

/*
Input
7
11
14
5
4
1
2
1000000000
*/

/*
output
2 4
4 3
1 3
2 1
1 1
1 2
31623 14130
*/