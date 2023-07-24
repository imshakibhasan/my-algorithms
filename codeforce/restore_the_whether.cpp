/**
 * @file restore_the_whether.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-24
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1833/B
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, i, t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        pair<int,int> a[n];
        int b[n], c[n];
        for(i = 0; i < n; i++){
            cin>>a[i].first;
            a[i].second = i;
        }
        for(i = 0; i < n; i++) {
            cin>>b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        for(i = 0; i < n; i++) c[a[i].second] = b[i];
        for(i = 0; i < n; i++) cout<<c[i]<<" ";
        cout<<endl;
    }
    return 0;
}

/*Input
3
5 2
1 3 5 3 9
2 5 11 2 4
6 1
-1 3 -2 0 -5 -1
-4 0 -1 4 0 0
3 3
7 7 7
9 4 8
*/

/*Output
2 2 5 4 11
0 4 -1 0 -4 0
8 4 9
*/