/**
 * @file unique_number.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-22
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1462/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, ans = 0, r, res = 0;
        cin>>n;
        if (n > 45) {
            cout<<"-1"<<endl;
        }
        else if (n <= 9) {
            cout<<n<<endl;
        }
        else {
            int i = 9;
            while (n > 0) {
                if (n/i > 0) {
                    ans = ans*10 + i;
                    n = n - i;
                }
                i--;
            }
            while (ans > 0) {
                r = ans % 10;
                res = (res*10) + r;
                ans = ans / 10;
            }
            cout<<res<<endl;
        }
    }
}

/*
Input
4
1
5
15
50
*/

/*
Output
1
5
69
-1
*/