/**
 * @file lan_visits_mary.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-11
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1816/A
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        cout<<2<<endl<<1<<" "<<b-1<<endl<<a<<" "<<b<<endl;
    }
}
/*
Input
8
3 4
4 4
3 6
2 2
1 1
7 3
2022 2023
1000000000 1000000000
*/

/*
Output
1
3 4
2
3 2
4 4
2
5 3
3 6
2
1 0
2 2
1
1 1
1
7 3
1
2022 2023
2
69420420 469696969
1000000000 1000000000
*/