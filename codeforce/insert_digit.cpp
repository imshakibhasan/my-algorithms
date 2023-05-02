/**
 * @file insert_digit.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-04
 * 
 * @copyright Copyright (c) 2023
 * Problrm : https://codeforces.com/contest/1811/problem/A
 */

#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		char d;
		string str;
		cin>>n>>d>>str;
		int i=0;
		while(i<n && str[i]>=d) i++;
		str.insert(i,1,d);
		cout<<str<<endl;
	}
}

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i, flag = 0;
        char  d;
        cin>>n>>d;
        char arr[n];
        cin>>arr;
        //cout<<arr;
        for (i = 0; i < n; i++) {
            if (flag > 0) {
                cout<<arr[i];
            }
            else if ( d >= arr[i]) {
                cout<<d<<arr[i];
                flag++;
            }
            else {
                cout<<arr[i];
            }
        }
        cout<<endl;
    }
}
*/


/*
Input
11
5 4
76543
1 0
1
2 5
44
3 6
666
5 6
13579
5 8
97531
19 4
9876543210123456789
5 7
73737
8 1
20000000
7 0
7058959
12 1
828127127732
*/

/*
Output
765443
10
544
6666
613579
987531
98765443210123456789
773737
210000000
70589590
8281271277321
*/