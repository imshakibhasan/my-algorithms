/**
 * @file help_far_away_kingdom.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-28
 * 
 * @copyright Copyright (c) 2023
 * problem : https://codeforces.com/problemset/problem/99/A
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin>>str;

    size_t n = str.find('.');
    if (str[n-1] == '9') {
        cout<<"GOTO Vasilisa."<<endl;
    }
    else {
        if (str[n+1] >= '5') {
            str[n-1] += 1;
        }
        str.erase(str.begin() + n, str.end());
        cout << str << endl;
    }
}

/*
Input
0.0

1.49

1.50

2.71828182845904523536

3.14159265358979323846

12345678901234567890.1

123456789123456789.999


*/

/*
Output
0

1

2

3

3

12345678901234567890

GOTO Vasilisa

*/