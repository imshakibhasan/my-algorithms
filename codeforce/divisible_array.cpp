/**
 * @file divisible_array.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-28
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1828/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n % 2 != 0) {
            for (int i = 1; i <= n; i++) {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else {
            int p = 2;
            for (int i = 1; i <= n; i++) {
                cout<<p<<" ";
                p = p + 2;
            }
            cout<<endl;
        }
    }
}

/*
Input
7
1
2
3
4
5
6
7
*/

/*
Output
1
2 4
1 2 3
2 8 6 4
3 4 9 4 5
1 10 18 8 5 36
3 6 21 24 10 6 14
*/