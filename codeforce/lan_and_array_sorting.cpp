/**
 * @file lan_and_array_sorting.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-10
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1815/A
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
	cin>>t;
	while(t--){
        long long n, i, arr[300005], sum = 0;
		cin>>n;
		for(i = 1; i <= n; i++) {
            cin>>arr[i];
		    if( i % 2 == 1) {
                sum+=arr[i];
            }
		    else {
                sum-=arr[i];
            }
		}
		if(sum > 0 && n % 2 == 0) {
			cout<<"NO"<<endl;
		}
        else {
            cout<<"YES"<<endl;
        }		
	}
}

/*Input
5
3
1 3 2
2
2 1
4
1 3 5 7
4
2 1 4 3
5
5 4 3 2 1
*/

/*
Output
YES
NO
YES
NO
YES
*/