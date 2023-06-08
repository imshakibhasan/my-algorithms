/**
 * @file aquamoon_and_two_arrays_reborn.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-08
 * 
 * @copyright Copyright (cpp) 2023
 * Problem : 
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
	cin>>t;
	while(t--) {
		int k, i, c;
        cin>>k;
        int arr[k], brr[k];
		for(i = 0; i < k; i++) {
		    cin>>arr[i];
        }
		for(i = 0; i < k; i++) {
		    cin>>brr[i];
        }
        int a[101], d[101], e = 0, f = 0;
		for(i=0;i<k;i++) {
			while(arr[i] > brr[i]) { 
                arr[i]--;
                a[e++] = i+1;
            }
			while(arr[i] < brr[i]){
                arr[i]++;
                d[f++] = i+1;
            }
		}
		if(e==f) {
            cout<<e<<endl;
			for( i = 0; i < e; i++) {
			    cout<<a[i]<<" "<<d[i]<<endl;
            }
        }
		else cout<<"-1"<<endl;
	}
}

/*Input
4
4
1 2 3 4
3 1 2 4
2
1 3
2 1
1
0
0
5
4 3 2 1 0
0 1 2 3 4
*/

/*Output
2
2 1
3 1
-1
0
6
1 4
1 4
1 5
1 5
2 5
2 5
*/