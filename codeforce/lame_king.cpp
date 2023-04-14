/**
 * @file lame_king.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-14
 * 
 * @copyright Copyright (c) 2023
 * Problem : 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<abs(a)+abs(b)+max(0,abs(abs(a)-abs(b))-1)<<endl;
    }

}

/*
INput
5
-4 1
4 4
0 -6
-5 -4
7 -8
*/

/*
Output
7
8
11
9
15
*/