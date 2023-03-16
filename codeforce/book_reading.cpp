/**
 * @file book_reading.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-16
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/884/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, t, x, ans = 0, flag = 0;
    cin>>n>>t;
    for (int i = 0; i < n; i++) {
        cin>>x;
        t = t - (86400 - x);
        if (flag == 0) {
            if (t <= 0) {
                ans = i+1;
                flag++;
            }
        }
    }
    cout<<ans<<endl;
}

/*
Input
2 2
86400 86398

2 86400
0 86400

*/

/*
Output
2

1
*/