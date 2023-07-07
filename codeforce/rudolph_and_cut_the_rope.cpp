/**
 * @file rudolph_and_cut_the_rope.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-07
 * 
 * @copyright Copyright (c) 2023
 * Problem: https://codeforces.com/problemset/problem/1846/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, a, b, ans;
	cin>>t;
	while(t--) {
		cin>>n;
        ans = 0;
		for (int i = 1; i <= n; ++i) {
            cin>>a>>b;
            if (a>b) {
                ++ans;
            }
        }
		cout<<ans<<endl;
	}
}

/*Input
4
3
4 3
3 1
1 2
4
9 2
5 2
7 7
3 4
5
11 7
5 10
12 9
3 2
1 5
3
5 6
4 5
7 7
*/

/*Output
2
2
3
0
*/
