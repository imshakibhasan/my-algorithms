/**
 * @file the_man_who_become_a_god.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-08
 * 
 * @copyright Copyright (c) 2023
 * Problem : 
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
	int i, t, n, k, arr[110], brr[110];
	cin>>t;
	while(t--) {
		cin>>n>>k;
		int sum = 0;
		for(i = 0; i < n; i++) {
			cin>>arr[i];
			if(i > 0) {
                brr[i-1] = abs(arr[i] - arr[i-1]);
            }
		}
		sort(brr, brr+n-1);
		for(i = 0; i < n-k; i++) {
            sum += brr[i];
        }
		cout<<sum<<endl;
	}
}

/*Input
3
4 2
1 3 5 2
6 3
1 9 12 4 7 2
12 8
1 9 8 2 3 3 1 8 7 7 9 2
*/

/*Output
4
11
2
*/