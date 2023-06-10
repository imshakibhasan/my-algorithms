/**
 * @file A_characteristic.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-10
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1823/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
		int n, k, i, j;
		cin>>n>>k;
		for(i = 1; i <= n; i++) {
			if(i*(i-1)/2+(n-i)*(n-i-1)/2 == k) {
				cout << "YES"<<endl;
				for(j = 1; j <= i; j++){
                    cout <<1<<" ";
                }
                for(j = i+1; j <= n; j++){
                    cout <<-1<<" ";
                }
                goto ext;
			}

		}
		cout <<"NO"<<endl;
		ext:;
	}
}

/*Input
7
2 0
2 1
3 1
3 2
3 3
5 4
5 5
*/

/*Output
YES
1 -1 
YES
1 1 
YES
1 -1 1 
NO
YES
1 1 1 
YES
-1 1 -1 1 1 
NO
*/
