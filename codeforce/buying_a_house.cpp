/**
 * @file buying_a_house.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-07
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/796/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, m, k, ans = 1000;
    cin>>n>>m>>k;
    m--;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (i = 0; i < n; i++) {
        if ((arr[i] != 0) && (arr[i] <= k)) {
            ans = min(ans, abs(i - m));
        }
    }
    cout<<(ans*10)<<endl;
}

/*
Input
5 1 20
0 27 32 21 19

7 3 50
62 0 0 0 99 33 22

10 5 100
1 0 1 0 0 0 0 0 1 1

*/

/*
Output

40

30

20
*/