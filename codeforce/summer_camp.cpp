/**
 * @file summer_camp.c
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/672/A
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	for(int i=1; i<=n; i++){
		s+=to_string(i);
	}
 
	cout<<s[n-1]<<endl;
}