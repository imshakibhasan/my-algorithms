/**
 * @file showstopper.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-26
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/contest/1798/problem/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, flag = 0;
        cin>>n;
        int arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin>>arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin>>arr2[i];
        }
        for (i = 0; i < n; i++) {
            if ((arr1[i] <= arr1[n-1] && arr2[i] <= arr2[n-1]) || (arr1[i] <= arr2[n-1] && arr2[i] <= arr1[n-1])) {

            }
            else {
                flag = 1;
            }
        }
        if (flag == 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

/*
Input
7
3
7 9 7
7 6 9
4
10 10 15 15
10 16 15 15
2
100 99
99 100
1
1
1
9
1 2 3 4 5 6 7 8 9
9 9 9 9 9 9 6 6 6
7
1 1 2 2 1 1 2
1 2 1 2 1 2 1
2
30 4
5 30
*/

/*
Output
Yes
No
Yes
Yes
Yes
No
No
*/