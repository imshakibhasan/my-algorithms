/**
 * @file poliyics.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-29
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1818/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n, k, j, i, count;
		cin>>n>>k;
		count = n;
		string s, a;
		cin>>a;
		for(i = 1; i < n; i++){
			cin>>s;
			if(a != s) {
                count--;
            }
		}
		cout<<count<<endl;
	}
}

/*Input
5
2 2
++
+-
1 3
+-+
4 1
+
-
-
+
5 4
++++
+--+
++-+
+-++
++++
4 2
++
--
--
-+
*/

/*Output
1
1
2
2
1
*/
