/**
 * @file permutation_b_type.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-14
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/137/B
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, j, n, count = 0, flag = 0;
    cin>>n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (i = 1; i <= n; i++) {
        flag = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == i) {
                flag++;
                break;
            }
        }
        if (flag == 0) {
            count++;
        }
    }
    cout<<count<<endl;
}

/*
Input
3
3 1 2

2
2 2

5
5 3 3 3 1
*/

/*Output
0
1
2
*/