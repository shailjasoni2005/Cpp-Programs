#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n,r;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        cout<<r<<endl;
    }

    return 0;
}