/**
 * @file arrays.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-10
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/572/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int i, n1, n2, k, m;
    cin>>n1>>n2>>k>>m;
    long long int x = 0, x1 = 0, y = 0, y1 = 0;
    for (i = 0; i < n1; i++) {
        cin>>x;
        if (i == (k-1)) {
            x1 = x;
        }
    }
    for (i = 0; i < n2; i++) {
        cin>>y;
        if (i == (n2 - m)) {
            y1 = y;
        }
    }
    if (x1 < y1) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

/*
Input
3 3
2 1
1 2 3
3 4 5

3 3
3 3
1 2 3
3 4 5

5 2
3 1
1 1 1 1 1
2 2

*/

/*
Output

YES

NO

YES
*/

/*
{
    long int x,y,i,j,k,m,n,a[100000],b[100000];
    while(cin>>x>>y)
    {
        cin>>k>>m;
        for(i=1;i<=x;i++)
            cin>>a[i];

        for(j=1;j<=y;j++)
            cin>>b[j];
        if(a[k]<b[y-m+1])
                cout<<"YES\n";
            else
                cout<<"NO\n";
    }
    return 0;
}
*/