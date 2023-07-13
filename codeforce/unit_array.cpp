/**
 * @file unit_array.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-13
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1834/A
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; 
    cin>>t;
	while (t--) {
		int i, n, k = 0; 
        cin>>n;
		for (i = 0; i < n; i++) {
			int a;
            cin>>a;
		    if (a == -1) { 
                k++;
            }
		}
		int m = min(k , n/2)/2*2;
		cout<<k - m<<endl;
	}
}

/*Input
7
4
-1 -1 1 -1
5
-1 -1 -1 1 1
4
-1 1 -1 1
3
-1 -1 -1
5
1 1 1 1 1
1
-1
2
-1 -1
*/

/*Output
1
1
0
3
0
1
2
*/