/**
 * @file grab_the_candies.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-19
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1807/problem/B
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, x, mihai = 0, bianca = 0;
        cin>>n;
        for (i = 1; i <= n; i++) {
            cin>>x;
            if (x % 2 == 0) {
                mihai = mihai + x;
            }
            else {
                bianca = bianca + x;
            }
        }
        if (mihai > bianca) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
Input
3
4
1 2 3 4
4
1 1 1 2
3
1 4 3
*/

/*
Output
YES
NO
NO
*/