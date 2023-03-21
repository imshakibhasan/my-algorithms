/**
 * @file lunch_rush.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-21
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/276/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int i, n, k, ans = -1000000000, r = 0;
    cin>>n>>k;
    long long int fi, ti;
    while (n--) {
        cin>>fi>>ti;
        if (ti <= k) {
            r = fi;
        }
        else {
            r = fi - (ti - k);
        }
        ans = max(ans, r);
    }
    cout<<ans<<endl;
}

/*
INput
2 5
3 3
4 5

4 6
5 8
3 6
2 3
2 2

1 5
1 7

*/

/*
Output
4

3

-1

*/