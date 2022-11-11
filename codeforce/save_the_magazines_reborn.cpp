/**
 * @file save_the_magazines_reborn.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-11
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/1743/C
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i, j, count = 0, sum = 0, min_v = 10000;
        cin>>n;
        char str[n];
        int arr[n];
        cin>>str;
        for (i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for (i = n - 1; i >= 0; i--) {
            if (str[i] == '1') {
                sum = sum + arr[i];
                min_v = min(arr[i], min_v);
            }
            else {
                if (str[i+1] == '1') {
                    sum = sum + arr[i];
                    min_v = min(arr[i], min_v);
                    sum = sum - min_v;
                    min_v = 10000;
                }
            }
        }
        cout<<sum<<endl;
    }
}

/*

Pinned by Coding Community | Newton School
Karan Mashru
3 weeks ago
(Subscribe for more such videos)

Code :

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, ans, i, j, min_v;
    string a;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        cin>>a;
        
        ll box[n];
        
        for(i=0; i<n; i++){
            cin>>box[i];
        }
        ans=0;
        for(i=n-1; i>=0; ){
            
            if(a[i]=='1'){
                min_v=box[i];
                while(i>=0){
                    min_v=min(min_v, box[i]);
                    if(a[i]=='1'){
                        ans=ans+box[i];
                        i--;
                    }else{
                        ans=ans+box[i];
                        i--;
                        ans=ans-min_v;
                        break;
                    }
                }
            }else{
                i--;
            }
        }
        
        cout<<ans<<"\n";
    }
}
*/