/**
 * @file trust_nobody.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-05
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1826/A
 */
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i, k, n, ans=-1;;
		cin>>n;
		int arr[n];
		for(i = 0; i < n; i++) {
             cin>>arr[i];
        }
		for(k = 0; k <= n; k++){
			int liars = 0;
			for(i = 0; i < n; i++){
				if(arr[i] > k){
					liars++;
				}
			}
			if(liars == k){
				ans = k;
			}
		}
		cout<<ans<<endl;
	}
}

/*
Input
7
2
1 2
2
2 2
2
0 0
1
1
1
0
5
5 5 3 3 5
6
5 3 6 6 3 5
*/

/*
Output
1
-1
0
-1
0
3
4
*/