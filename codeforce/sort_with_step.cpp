/**
 * @file sort_with_step.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-03
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1823/B
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, n, k, x, flag = 0;
        cin>>n>>k;
        for (i = 1; i <= n; i++) {
            cin>>x;
            if (x%k != i%k) {
                flag++;
            }
        }
        if(!flag){
            cout<<"0"<<endl;
        }
        else if(flag == 2){
            cout<<"1"<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
}

/*
Input
6
4 1
3 1 2 4
4 2
3 4 1 2
4 2
3 1 4 2
10 3
4 5 9 1 8 6 10 2 3 7
10 3
4 6 9 1 8 5 10 2 3 7
10 3
4 6 9 1 8 5 10 3 2 7
*/

/*
Output
0
0
1
0
1
-1
*/