/**
 * @file box_is_pull.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-26
 * 
 * @copyright Copyright (c) 2023
 * problem : 
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int x1, x2, y1, y2, ans = 0;
        cin>>x1>>y1>>x2>>y2;
        if (x1 == x2 || y1 == y2) {
            ans = abs(x1 - x2) + abs(y1 - y2);
        }
        else {
            ans = abs(x1 - x2) + abs(y1 - y2) + 2;
        }
        cout<<ans<<endl;
    }
}

/*
INput
2
1 2 2 2
1 1 2 2
*/

/*
Output
1
4
*/

/*
using namespace std;
int main()
{
    fastread();
    ll t;
    cin>>t;
    ll x1,y1,x2,y2;
    while(t--){
        ll ans = 0;
        cin>>x1>>y1>>x2>>y2;
        if(x1 == x2 || y1 == y2){
            ans = abs(x1 - x2) + abs(y1 - y2);
        }
        else{
            ans = abs(x1 - x2) + abs(y1 - y2) + 2;
        }
        cout<<ans<<endl;
    }

    return 0;
}*/