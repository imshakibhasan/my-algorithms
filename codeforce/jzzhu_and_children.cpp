/**
 * @file jazzhu_and_children.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-31
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/450/A
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
    double i, x, r, ans = 0, pos = -1, n, m, flag = 1;
    cin>>n>>m;
    for (i = 0; i < n; i++) {
        cin>>x;
        r = ceil(x / m);
        if (r >= ans) {
            ans = r;
            pos = max(pos, i+1);
        }
        flag = 0;
    }
    if (flag == 0) {
        cout<<pos<<endl;
    }
    else {
        cout<<n<<endl;
    }
}

/*
Input
5 2
1 3 1 4 2

6 4
1 1 2 2 3 3
*/

/*
Output

4

6
*/