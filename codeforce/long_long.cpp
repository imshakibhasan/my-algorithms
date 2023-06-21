/**
 * @file long_long.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-21
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1843/B
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; 
    cin>>t;
    while(t--) {
        long long int i, n, sum = 0, count = 0, p = 0; 
        cin>>n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin>>arr[i];
            sum += abs(arr[i]);
        }
        for (i = 0; i < n; i++) {
            if(arr[i] < 0) {
                p = 1;
            }
            else if(arr[i] > 0) {
                count += p;
                p = 0;
            }
        }
        count += p;
        cout<<sum<<' '<<count<<endl;
    }
}

/*Input
5
6
-1 7 -4 -2 5 -8
8
-1 0 0 -2 1 0 -3 0
5
2 -1 0 -3 -7
5
0 -17 0 1 0
4
-1 0 -2 -1
*/

/*Output
27 3
7 2
13 1
18 1
4 1
*/
