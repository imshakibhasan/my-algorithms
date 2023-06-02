/**
 * @file best_binary_string.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-02
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1837/C
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        string s;
        cin>>s;
        char c = '0';
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '?') {
                s[i] = c;
            }
            else {
                c = s[i];
            }
        }
        cout<<s<<endl;	
    }
}

/*Input
4
??01?
10100
1??10?
0?1?10?10
*/

/*
Output
00011
10100
111101
011110010
*/