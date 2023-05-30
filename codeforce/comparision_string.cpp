/**
 * @file comparision_string.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-30
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1837/B
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, ans = 1, maxi = 0, count = 1, n;
        cin>>n;
        string arr;
        cin>>arr;
        for (i = 0; i < n; i++) {
            if (arr[i] == arr[i+1]) {
                count++;
            }
            else {
                maxi = max(maxi, count);
                count = 1;
            }
        }
        ans += maxi;
        cout<<ans<<endl;
    }
}
/*
#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		int max1=0;
		int d=1;
		for(int i=0;i<n;i++){
			if(s[i]==s[i+1]) d++;
			else{
				max1=max(max1,d);d=1;
			}
		}
		cout<<max1+1<<endl;
	}
}
*/

/*Input
4
4
<<>>
4
>><<
5
>>>>>
7
<><><><
*/

/*Output
3
3
6
2
*/