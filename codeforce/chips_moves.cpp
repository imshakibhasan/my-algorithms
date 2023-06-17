/**
 * @file chips_moves.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-17
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1213/A
 */
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,s,x,i;
    for (cin>>n; i++<n; s+=x&1){
        cin>>x;
    }
    cout<<min(s,n-s);
}
*/
#include<iostream>
using namespace std;
int n,s,x,i;
int main(){
    for(cin>>n;i++<n;s+=x&1){ 
        cin>>x;
    }
    cout<<min(s,n-s);
}

/*Input
3
1 2 3

5
2 2 2 3 3
*/

/*Output
1

2
*/