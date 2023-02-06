/**
 * @file anti_fibonacci_permutation.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-06
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1644/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n;
        cin>>n;
        for (i = 1; i <= n; i++) {
            cout<<i<<" ";
            for (int j = n; j > 0; j--) {
                if (j == i) {
                    continue;
                }
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
}

/*Input
2
4
3
*/

/*Output
4 1 3 2
1 2 4 3
3 4 1 2
2 4 1 3
3 2 1
1 3 2
3 1 2
*/