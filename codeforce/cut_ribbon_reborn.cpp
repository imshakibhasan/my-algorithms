/**
 * @file factorization.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-13
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/189/A
 */

#include <iostream>
using namespace std;
int main() {
    int n,a,b,c,d=1,e,i,j;
    cin>>n>>a>>b>>c;
    for(i = 0;i <= 4000; i++) {
        for(j = 0; j <= 4000; j++) { 
            e = n-a*i-b*j;
            if(e >= 0 && e % c == 0)
            d = max(d,i+j+e/c);
        }
    }
    cout<<d<<endl;
}

/*
Input
5 5 3 2

7 5 5 2
*/

/*
Output

2
2

*/