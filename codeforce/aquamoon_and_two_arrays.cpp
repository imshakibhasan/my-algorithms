/**
 * @file aquamoon_and_two_arrays.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-27
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1546/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j, k, n, sum1 = 0, sum2 = 0, m = 0, count = 0;
        cin>>n;
        int arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin>>arr1[i];
            sum1 = sum1 + arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin>>arr2[i];
            sum2 = sum2 + arr2[i];
        }
        if (sum1 != sum2) {
            cout<<"-1"<<endl;
        }
        else {
            for (i = 0; i < n; i++) {
                if (arr1[i] != arr2[i]) {
                    count = abs(arr1[i] - arr2[i]);
                    m = m + count;
                }
            }
            cout<<m/2<<endl;
            for (i = 0; i < n; i++) {
                if (arr1[i] > arr2[i]) {
                    arr1[i]--;
                    cout<<i+1<<" ";
                    k = i;
                    i--;
                }
                for (j = k + 1; j < n; j++) {
                    if (arr1[i] > arr2[i]) {
                        cout<<j+1<<endl;
                        arr1[j]++;
                        break;
                    }
                }
            }
        }
    }
}

/*
Input
4
4
1 2 3 4
3 1 2 4
2
1 3
2 1
1
0
0
5
4 3 2 1 0
0 1 2 3 4
*/

/*
Output
2
2 1
3 1
-1
0
6
1 4
1 4
1 5
1 5
2 5
2 5
*/