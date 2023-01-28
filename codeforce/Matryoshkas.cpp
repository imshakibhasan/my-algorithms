/**
 * @file Matryoshkas.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-27
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1790/problem/D
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, j, n, a = 0, count = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for (i = 0; i < n; i++) {
            if (arr[i] == 0) {
                continue;
            }
            a = arr[i];
            for (j = i+1; j < n; j++) {
                if (arr[j] == a+1 ) {
                    a = arr[j];
                    //cout<<a<<"\t";
                    arr[j] = 0;
                }
                else if (arr[j] > a+1) {
                    break;
                }
            }
            count++;
        }
        cout<<count<<endl;
    }
}

/*
Input
10
6
2 2 3 4 3 1
5
11 8 7 10 9
6
1000000000 1000000000 1000000000 1000000000 1000000000 1000000000
8
1 1 4 4 2 3 2 3
6
1 2 3 2 3 4
7
10 11 11 12 12 13 13
7
8 8 9 9 10 10 11
8
4 14 5 15 6 16 7 17
8
5 15 6 14 8 12 9 11
5
4 2 2 3 4
*/

/*
Output
2
1
6
2
2
2
2
2
4
3
*/