/**
 * @file tubetube_feed.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-04
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1822/A
 */

#include<iostream>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--) {
        int n, t, arr[100];
        cin>>n>>t;
        int a = -1, ans = -1, x;
        for(int i = 1; i <= n; i++) {
            cin>>arr[i];
        }
        for(int i = 1; i <= n; i++){
            cin>>x;
            if(arr[i] + i - 1 <= t){
                if(x > a) {
                    a = x;
                    ans = i;
                }
            }
        }
	    cout<<ans<<endl;
    }
}

/*Input
5
5 9
1 5 7 6 6
3 4 7 1 9
4 4
4 3 3 2
1 2 3 4
5 7
5 5 5 5 5
2 1 3 9 7
4 33
54 71 69 96
42 24 99 1
2 179
55 66
77 88
*/

/*Output
3
2
3
-1
2
*/