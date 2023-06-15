/**
 * @file unique_bid_auction_again_reborn.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-15
 * 
 * @copyright Copyright (cpp) 2023
 * Problem : https://codeforces.com/problemset/problem/1454/B
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
	cin>>t;
	while(t--){
        int i, n, a[200005];
		cin>>n;
		int position = -1, mini = 1e9, sum[200005] = {0};
		for(i = 1; i <= n; i++) {
            cin>>a[i];
            sum[a[i]]++;
		}
        for(i = 1; i <= n; i++) {
            if (sum[a[i]] == 1 && a[i] < mini) {
                mini = a[i];
                position = i;
            }
        }
		cout<<position<<endl;
	}
}

/*Input
6
2
1 1
3
2 1 3
4
2 2 2 3
1
1
5
2 3 2 4 2
6
1 1 5 5 4 4
*/

/*Output
-1
2
4
1
2
-1
*/