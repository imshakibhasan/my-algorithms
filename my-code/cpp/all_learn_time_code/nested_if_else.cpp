#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cout<<"Please Enter Three Number to finds its greater Number: \n";
    cin>>a>>b>>c;
    if ( a>b ) {
        if ( a>c ) {
            cout<<"Greater number is:"<<a<<endl;
        }
        else {
            cout<<"Greater number is:"<<c<<endl;
        }
    }
    else {
        if ( b>c ) {
            cout<<"Greater number is:"<<b<<endl;
        }
        else {
            cout<<"Greater number is:"<<c<<endl;
        }
    }
    return 0;
}