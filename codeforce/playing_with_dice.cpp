/**
 * @file playing_with_dice.cpp
 * @author Shakib Hasan (hasan29shakib@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-27
 * 
 * @copyright Copyright (c) 2022
 * problem : https://codeforces.com/problemset/problem/378/A
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c = 0, d = 0, e = 0;
    cin>>a>>b;
    for(int i = 1; i <= 6; i++) {
        if (abs(a-i) < abs(b-i)) {
            c++;
        }
        else if (abs(b-i) < abs(a - i)) {
            d++;
        }
        else {
            e++;
        }
    }
    cout<<c<<" "<<e<<" "<<d<<endl;
}

/*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, f(0), s(0), d(0);
    cin >> a >> b;

    for (int i = 1; i <= 6; i++)
        if (abs(a - i) < abs(b - i))
            f++;
        else if (abs(b - i) < abs(a - i))
            s++;
        else
            d++;

    cout << f << " " << d << " " << s << endl;
    return 0;
}*/