/**
 * @file sum_of_odd_integers.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-29
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1327/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n, k;
        cin>>n>>k;
        if (n % 2 == k % 2) {
            if (k*k > n) {
                cout<<"NO"<<endl;
            }
            else {
                cout<<"YES"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
Input
6
3 1
4 2
10 3
10 2
16 4
16 5
*/

/*
Output
YES
YES
NO
YES
YES
NO
*/