/**
 * @file hayato_and_school.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-26
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1780/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, ans = 0, p = 0, count = 0, even = 0, odd = 0;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            if (arr[i]%2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if (odd > 0) {
            if (odd >= 3) {
                for (i = 0; i < n; i++) {
                    if (arr[i]%2 != 0 ) {
                        cout<<i+1<<" ";
                        count++;
                        if (count == 3) {
                            break;
                        }
                    }
                }
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
3
1 1 1
4
1 1 2 2
3
1 2 3
5
1 4 5 1 2
4
2 6 2 4
5
5 6 3 2 1
*/

/*
Output
YES
1 2 3
YES
3 4 1
NO
YES
1 3 4
NO
YES
1 3 5
*/