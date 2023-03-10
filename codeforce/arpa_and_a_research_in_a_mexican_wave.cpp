/**
 * @file arpa_and_a_research_in_a_mexican_wave.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-10
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/851/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, k, t;
    cin>>n>>k>>t;
    if (t <= k ) {
        cout<<t<<endl;
    }
    else if (t > k && t <=n ) {
        cout<<k<<endl;
    }
    else {
        cout<<(k - (t-n))<<endl;
    }
}

/*
Input
10 5 3

10 5 7

10 5 12

*/

/*
Output
3
5
3
*/

/*
n, m, k;
if(k < m)
		printf("%d\n", k);
	else if(t > n)
		printf("%d\n", k - (t - n));
	else
		printf("%d\n", m);
        
*/