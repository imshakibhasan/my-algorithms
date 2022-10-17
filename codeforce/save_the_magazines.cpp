/**
 * @file save_the_magazines.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-17
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/contest/1743/problem/C
 */

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int n, j, sum = 0;
        cin>>n;
        char str[n];
        int arr[n];
        cin>>str;
        for (j = 0; j < n; j++) {
            cin>>arr[j];
        }
        for (j = 0; j < n; j++) {

            if (str[j] == '1') {
                if (j == 0) {
                    sum = sum + arr[j];
                }
                else if ((arr[j - 1] > arr[j] && str[j-1] != '1') || (arr[j-1] < arr[j] && str[j-1] != '1' && arr[j] > arr[j+1] && str[j+1] == '1')) {
                    sum = sum + arr[j-1];
                    str[j] = '0';
                }
                else {
                    sum = sum + arr[j];
                }
            }
            
        }
        cout<<sum<<endl;
    }
}
*/
// || (arr[j-1] < arr[j] && str[j-1] != '1' && arr[j] > arr[j+1] && str[j+1] == '1')

/*
for (j = 0; j < n - 1; j++) {
            for (int k = 0; k < n - 1 - j; k++) {
                if (arr[k] < arr[k+1]) {
                    temp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = temp; 
                }
            }
        }
        */
       /*

#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t, a, sum, temp,r[100];
	string s ;
	cin>>t;
	while(t--)
	{ sum=0;
		cin>>a;
		cin>>s;
		for(int i=0;i<a;i++)
		{
			cin>>r[i];
		}
		
		for(int i=0;i<a;i++)
		{
			if(s[i]=='1' && s[i-1]=='0')
			{
				 if(r[i-1]>r[i])
				 {
				 	s[i]='0';
				 	s[i-1]='1';
			      }
				
			}
		}
		for(int i=0;i<a;i++)
		{
			if(s[i]=='1')
				{sum+=r[i];}
		}
		cout<<sum<<endl;
	}
}
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin>>t;
    for (i = 0; i < t; i++) {
        int n, j, sum = 0;
        cin>>n;
        char str[n];
        int arr[n];
        cin>>str;
        for (j = 0; j < n; j++) {
            cin>>arr[j];
        }
        for (j = 0; j < n; j++) {

            if (str[j] == '0') {
                //if (j == 0) {
                //    sum = sum + arr[j];
                //}
                if ((arr[j + 1] < arr[j] && str[j+1] == '1')) {
                    //sum = sum + arr[j];
                    str[j] = '1';
                    str[j+1] = '0';
                }
                else {
                    sum = sum + arr[j];
                }
            }
            
        }
        cout<<sum<<endl;
    }
}