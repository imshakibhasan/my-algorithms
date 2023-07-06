/**
 * @file tenzing_and_tsondu.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-06
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1842/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int t,n,m,a,s1,s2;
	cin>>t;
	while(t--) {
		cin>>n>>m;
        s1 = 0;
        s2 = 0;
		for ( int i = 1; i <= n; i++) {
            cin>>a;
            s1 += a;
        }
		for ( int i = 1; i <= m; i++) {
            cin>>a;
            s2 += a;
        }
		if (s1 < s2) {
            cout<<"Tenzing"<<endl;
        }
		else if (s1 == s2) {
            cout<<"Draw"<<endl;
        }
		else {
            cout<<"Tsondu"<<endl;
        }
	}
}

/*Input
6
1 3
9
1 2 3
2 3
1 2
1 1 1
3 2
1 2 3
1 1
3 3
1 1 1
2 2 2
10 10
1 2 3 3 2 2 1 1 2 2
3 3 3 3 2 1 1 1 1 1
10 10
1 2 3 4 5 6 7 8 9 10
6 7 8 9 10 11 1 1 1 1
*/

/*Output
Tsondu
Draw
Tsondu
Tenzing
Draw
Draw
*/