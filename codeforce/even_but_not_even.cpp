/**
 * @file even_but_not_even.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-13
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1291/A 
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n; 
    cin>>t; 
    string str, a; 
	while(t--){
        cin>>n>>str; 
        a = ""; 
        for ( int i = 0; i < n; i++) {
            if ( (str[i]-'0') % 2) {
                a += str[i];
            }
        }
        if (a.length() >= 2) {
            cout<<a[0]<<a[1]<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
}

/*Input
4
4
1227
1
0
6
177013
24
222373204424185217171912
*/

/*Output
1227
-1
17703
2237344218521717191
*/