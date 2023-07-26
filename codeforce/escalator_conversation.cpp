/**
 * @file escalator_conversation.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-26
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1851/A
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, n, m, k, h, t, x;
    cin>>t;
    while(t--) {
        int ans = 0;
        cin>>n>>m>>k>>h;
        for (i = 0; i < n; i++){
            cin>>x;
            if (abs(h-x)%k == 0 && abs(h-x)/k<m && x != h){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}

/*Input
7
5 3 3 11
5 4 14 18 2
2 9 5 6
11 9
10 50 3 11
43 44 74 98 62 60 99 4 11 73
4 8 8 49
68 58 82 73
7 1 4 66
18 66 39 83 48 99 79
9 1 1 13
26 23 84 6 60 87 40 41 25
6 13 3 28
30 70 85 13 1 55
*/

/*Output
2
1
4
1
0
0
3
*/