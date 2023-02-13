/**
 * @file permutation.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-27
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1790/problem/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j, k, n, x = 0;
        cin>>n;
        int arr[n][n-1];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n-1; j++) {
                cin>>arr[i][j];
            }
        }
        
        cout<<endl;
    }
}

/*
Input
5
4
4 2 1
4 2 3
2 1 3
4 1 3
3
2 3
1 3
1 2
5
4 2 1 3
2 1 3 5
4 2 3 5
4 1 3 5
4 2 1 5
4
2 3 4
1 3 4
1 2 3
1 2 4
3
2 1
1 3
2 3
*/

/*
Output
4 2 1 3 
1 2 3 
4 2 1 3 5 
1 2 3 4 
2 1 3 
*/