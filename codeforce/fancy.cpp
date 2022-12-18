/**
 * @file fancy.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		int angle=180-a;
		if(360%angle==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}