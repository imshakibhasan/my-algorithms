/**
 * @file come_together.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-06
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1845/B
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int x1, y1, x2, y2, x3, y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		int ans = (abs(x1 - x2) + abs(y1 - y2) + 1 + abs(x1 - x3) + abs(y1 - y3) + 1 - (abs(x2 - x3) + abs(y2 - y3))) / 2;
		cout<<ans<<endl;
	}
}

/*Input
3
3 1
1 3
6 4
5 2
2 2
7 2
1 1
4 3
5 5
*/

/*Output
3
1
6
*/