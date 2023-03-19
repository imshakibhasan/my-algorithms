/**
 * @file find_and_replace.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-19
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/contest/1807/problem/C
 */
#include<bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	while(T--){
		int n;char a[2010];bool f=1;
		cin>>n>>a;
		for(int i=0;i<n;i+=2) {
            for(int j=1;j<n;j+=2) {
                if(a[i]==a[j]) {
                    f=0;
                }
            }
        }  
		f?printf("YES\n"):printf("NO\n"); 
	}
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int i, j, n, flag = 1;
        cin>>n;
        char arr[2010];
        cin>>arr;
        for (i = 0; i < n; i+=2) {
            for (j = 1; j < n; j+=2) {
                if (arr[i] == arr[i+1]) {
                    flag = 0;
                }
            }
        }
        if (flag > 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
*/

/*
Input
8
7
abacaba
2
aa
1
y
4
bkpt
6
ninfia
6
banana
10
codeforces
8
testcase
*/

/*
Output
YES
NO
YES
YES
NO
YES
NO
NO
*/


/*
for (i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i+1]) {
                flag++;
            }
        }
        if (flag > 0) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }*/