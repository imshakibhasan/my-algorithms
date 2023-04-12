/**
 * @file grid_reconstruction.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-12
 * 
 * @copyright Copyright (c) 2023
 * Problem
 */
#include <iostream>
using namespace std;
int main() {
    int n, i, t; 
    cin>>t;
    while(t--){
		cin>>n;
        for(i=0;i<n/2;++i) {
            cout<<2*n-2*i<<" "<<(2*i)+2<<" ";
        }
        cout<<endl;
        for(i=0;i<n/2;++i) {
            cout<<(2 * i) + 1<<" "<<n+2*i+1<<" "; 
        }
        cout<<endl;
    }
}

/*
Input
3
2
4
6
*/

/*
Output
3 2
1 4
8 2 6 4
1 5 3 7
11 5 9 1 7 3
6 10 2 8 4 12
*/
