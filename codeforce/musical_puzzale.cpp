/**
 * @file musical_puzzale.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-07
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/contest/1833/problem/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
	cin>>t;
	while(t--) {
	    int i, n;
        string str;
		cin>>n>>str;
		set<string> pair;
		for(i = 0; i < n-1; i++) {
		    pair.insert(str.substr(i,2));
		}
		cout<<pair.size()<<endl;
	}
} 