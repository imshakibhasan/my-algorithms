/**
 * @file lunatic_never_content.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-07
 * 
 * @copyright Copyright (c) 2023
 * Problem : 
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
	    int i, j, n, x = 0;
	    cin>>n;
	    int arr[n];
	    for(i = 0; i < n; i++) { 
	        cin>>arr[i];
        }
	    for(i = 0, j = n-1; i < n/2, j >= n/2; i++ , j--){
	    
	        x=__gcd(abs ( arr[j] - arr[i]), x);
	    }
	    cout<<x<<endl;	
    }
}

/*
Input
4
2
1 2
8
3 0 1 2 0 3 2 1
1
0
3
100 1 1000000000
*/

/*
Output
1
2
0
999999900
*/