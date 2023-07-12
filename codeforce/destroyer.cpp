/**
 * @file destroyer.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-12
 * 
 * @copyright Copyright (cpp) 2023
 * Problem : https://codeforces.com/problemset/problem/1836/A
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i, n;
		cin>>n;
		int arr[100]={0};
		for( i = 0; i < n; i++){
			int x;
			cin>>x;
			arr[x]++;
		}
		bool x = true;
		for( i = 1; i < 100; i++){
			if(arr[i] > arr[i-1]){
				x = false;
				break;
			}
		}
		if(x == 0){
            cout<<"NO"<<endl;
        }
		else {
            cout<<"YES"<<endl;
        }
    }
}

/*Input
5
6
0 1 2 0 1 0
9
0 0 0 0 1 1 1 2 2
3
0 0 2
1
99
5
0 1 2 3 4
*/

/*Output
YES
YES
NO
NO
YES
*/