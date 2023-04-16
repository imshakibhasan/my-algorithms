/**
 * @file worms.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-16
 * 
 * @copyright Copyright (c) 2023
 * Problem : 
 */


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1000003],i,x=1,m,q;
    cin>>n;
    for(i=1;i<=n;i++) { 
        cin>>q;
        while(q--) {
            a[x]=i,x++;
        }
    }
    cin>>m;
    while(m--) {
        cin>>q,cout<<a[q]<<endl;
    }
}

/*
Input
5
2 7 3 4 9
3
1 25 11
*/

/*
Output
1
5
3
*/