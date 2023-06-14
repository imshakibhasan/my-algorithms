/**
 * @file k_string.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-14
 * 
 * @copyright Copyright (c) 2023
 * Problem : 
 */ 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s, a;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0; i<s.size(); i+=k) {
        if(s[i] == s[i+k-1]) {
            a+=s[i];
        }
        else {
            cout<<"-1";
            exit(0);
        }
    }
    while(k--) {
        cout<<a;
    }
}

/*Input
2
aazz

3
abcabcabz
*/

/*Output
azaz

-1
*/
