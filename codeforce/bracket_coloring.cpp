/**
 * @file best_binary_string.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-31
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1837/D
 */

#include <iostream>

using namespace std;

int ans[200005];

int main()
{
    int T; cin >> T;
	while(T --)
	{
	    int n; cin >> n;
	    string s; cin >> s;
        int cnt = 0, k = 0, lst = 0;
		for(int i = 0; i < n; i ++)
		{
			if(s[i] == s[0]) cnt ++;
			else cnt --;
			if(lst + cnt > 0) ans[i] = 1;
			else ans[i] = 2;
			k = max(k, ans[i]);
			lst = cnt;
		}
		if(cnt != 0)
		{
			cout << -1 << endl;
			continue;
		}
		cout << k << endl;
		for(int i = 0; i < n; i ++) cout << ans[i] << " ";
		cout << endl;
	}
	return 0;
}

/*Input
4
8
((())))(
4
(())
4
))((
3
(()

*/

/*Output
2
2 2 2 1 2 2 2 1
1
1 1 1 1
1
1 1 1 1
-1

*/