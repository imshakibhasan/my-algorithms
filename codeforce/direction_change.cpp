/**
 * @file direction_change.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-08
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/contest/1668/problem/A
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        if(n < m) {
            swap(n, m);
        }
        if(m == 1 && n >= 3) {
            cout<<-1<<endl;
        }
        else {
            cout<<2 * n-2- (n+m) % 2 <<endl;
        }
    }
}

/*
Input
6
1 1
2 1
1 3
4 2
4 6
10 5
*/

/*
Output
0
1
-1
6
10
17
*/