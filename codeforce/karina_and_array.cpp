/**
 * @file karina_and_array.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-04
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1822/B
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int i, n, ans = 0;
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        ans = max((arr[0]*arr[1]), (arr[n-1]*arr[n-2]));
        cout<<ans<<endl;
    }
}

/*Input
7
4
5 0 2 1
3
-1 1 0
5
2 0 -1 -4 0
6
-8 4 3 7 1 -9
6
0 3 -2 5 -4 -4
2
1000000000 910000000
7
-1 -7 -2 -5 -4 -6 -3
*/

/*Output
10
0
4
72
16
910000000000000000
42
*/