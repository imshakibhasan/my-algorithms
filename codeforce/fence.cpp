/**
 * @file fence.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-06
 * 
 * @copyright Copyright (cpp) 2023
 * prolem : https://codeforces.com/problemset/problem/1422/A
 * 
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        cout<<(a+b+c)-1<<endl;
    }
}
/*
Input
2
1 2 3
12 34 56
*/

/*
Output
4
42
*/