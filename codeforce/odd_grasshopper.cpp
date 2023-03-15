/**
 * @file odd_grasshopper.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-15
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1607/B
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int x, n, ans = 0, r;
        cin>>x>>n;
        if (abs(x) % 2 == 1) {
            //cout<<"YEs";
            r = n % 4;
            if (r == 0) {
                ans = x;
            }
            else if (r == 1) {
                ans = x + n;
            }
            else if (r == 2) {
                ans = x + (n-1) - n;
            }
            else {
                ans = x + (n - 2) - (n - 1) - n;
            }
        }
        else {
            //cout<<"NO";
            r = n % 4;
            if (r == 0) {
                ans = x;
            }
            else if (r == 1) {
                ans = x - n;
            }
            else if (r == 2) {
                ans = x + n - (n - 1);
            }
            else {
                ans = x + n + (n-1) - (n-2);
            }
        }
        cout<<ans<<endl;
    }
}

/*
Input
9
0 1
0 2
10 10
10 99
177 13
10000000000 987654321
-433494437 87178291199
1 0
-1 1

*/

/*
Output
-1
1
11
110
190
9012345679
-87611785637
1
0

*/