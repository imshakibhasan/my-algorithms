/**
 * @file sasha_and_array_coloring.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-20
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1843/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int i, j, n, arr[1000], sum = 0;
        cin>>n;
        for(i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(i = 0, j = n-1; i < j; i++, j--) {
            sum+=arr[j] - arr[i];
        }
        cout<<sum<<endl;
    } 
}

/*Input
6
5
1 5 6 3 4
1
5
4
1 6 3 9
6
1 13 9 3 7 2
4
2 2 2 2
5
4 5 2 2 3
*/

/*Output
7
0
11
23
0
5
*/