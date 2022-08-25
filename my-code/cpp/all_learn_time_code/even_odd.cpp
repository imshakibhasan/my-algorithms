#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Please Enter Any Number To Finds Its Even Or Odd: \n";
    cin>>n;
    if (n%2==0 ) {
        cout<<n<<" is Even\n";
    }
    else {
        cout<<n<<" is Odd\n";
    }
    return 0;
}