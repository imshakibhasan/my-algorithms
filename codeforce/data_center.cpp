/**
 * @file data_center.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-18
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/1250/F
 */
/*
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ll n;
     cin>>n;
     ll a,b,p;
     ll minp = INT_MAX;
     for(int i=1;i<=sqrt(n);i++)
     {
          if(n%i==0)
          {
               a=n/i;
               b=n/a;
               p=(2*a) + (2*b);
               if(p<minp)
               minp=p;
               
          }
     }
     cout<<" a = "<<a<<endl;
     cout<<" b = "<<b<<endl;
     cout<<minp;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, ans = 0, res = 1000000, r = 0, p = 0;
    cin>>n;
    for (i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            r = n / i;
            p = i;
            ans = (2*r) + (2*p);
            res = min(res, ans);
            cout<<"Res = "<<res<<"\n";
        }
    }
    cout<<" r = "<<r<<endl;
    cout<<" p = "<<p<<endl;
    cout<<res<<endl;
}

/*
Input
36

13

1
*/

/*
Output
24

28

4

*/