/**
 * @file divide_and_conquer.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-15
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1762/problem/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, sum = 0, ans = 1000000, count, a = 0;
        cin>>n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            sum = sum + arr[i];
        }
        if (sum % 2 == 0) {
            cout<<"0"<<endl;
        }
        else {
            for (i = 0; i < n; i++) {
                count = 0;
                a = arr[i];
                while ((arr[i]%2) == (a%2)) {
                    count++;
                    a = a / 2;
                }
                ans = min(ans, count);
            }
            cout<<ans<<endl;
        }
    }
}
/*
Input:
4
4
1 1 1 1
2
7 4
3
1 2 4
1
15
*/

/*
Output:
0
2
1
4
*/

