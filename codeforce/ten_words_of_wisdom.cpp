/**
 * @file ten_words_of_wisdom.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-21
 * 
 * @copyright Copyright (c) 2023
 * Problem : https://codeforces.com/problemset/problem/1850/B
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, i = 1, response = 1, quality = -1;
        cin>>n;
        while (n--) {
            int a, b;
            cin>>a>>b;
            if (a <= 10) {
                if (b > quality) {
                    quality = b;
                    response = i;
                }
            }
            i++;
        }
        cout<<response<<endl;
    }
}

/*Input
3
5
7 2
12 5
9 3
9 4
10 1
3
1 2
3 4
5 6
1
1 43
*/

/*Output
4
3
1
*/