/**
 * @file direction_change.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-03
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1136/A
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, page = 0;
    int finish[10000];
    finish[0] = 0;
    cin>>n;
    for(int i = 1; i <= n; i++) {
        int s,f;
        cin>>s>>f;
        finish[i]=f;
    }
    cin>>k;
    for(int i = 1; i <= n; i++){
        if(k <= finish[i]){
            page = i;
            break;
        }
    }
    if(page == 1) {
        cout<<n<<endl;
    }
    else if(page>1) {
        cout<<n - (page - 1)<<endl;
    }
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,page=0;
    int finish[10000];
    finish[0]=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        int s,f;
        cin>>s>>f;
        finish[i]=f;
    }
    cin>>k;
    for(int i=1; i<=n; i++){
        if(k<=finish[i]){
            page=i;
            break;
        }
    }
    if(page==1){
        cout<<n<<endl;
    }
    else if(page>1){
        cout<<n-(page-1)<<endl;
    }
    return 0;
}
*/