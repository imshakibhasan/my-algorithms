/**
 * @file three_parts_of_the_array.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-22
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/contest/1006/problem/C
 */
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    int x[t];
    for(int m = 0; m < t; m++) {
        cin>>x[m];
    }
    long long int i = 0, j = t-1, a, c, sum = 0;
    a = x[i];
    c = x[j];
    while(i < j) {
        if(a < c)
            a = x[++i] + a;
        else if(a>c)
            c = x[--j]+c;
        else {
            sum = a;
            a = x[++i]+a;
            c = x[--j]+c;
        }
    }
  cout<<sum;
}

/*Input
5
1 3 1 1 4

5
1 3 2 1 4

3
4 1 2
*/

/*Output
5

4

0
*/