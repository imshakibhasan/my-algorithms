/**
 * @file blackboard_list.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-09
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1838/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int i, n;
        cin>>n; 
        int arr[n];
        for(i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        if(arr[0] >= 0) {
            cout<<arr[n-1]<<endl;
        }
        else {
            cout<<arr[0]<<endl;
        }
    }
}

/*Input
9
3
9 2 7
3
15 -4 11
4
-9 1 11 -10
5
3 0 0 0 3
7
8 16 8 0 8 16 8
4
0 0 0 0
10
27 1 24 28 2 -1 26 25 28 27
6
600000000 800000000 0 -200000000 1000000000 800000000
3
0 -1000000000 1000000000
*/

/*Output
9
11
-9
3
8
0
-1
600000000
0
*/