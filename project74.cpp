#include <iostream>
using namespace std;

int & fun(int &x)    //this is itself a.
{
    cout<<x<<endl;
    return x;
}

int main()
{
    int a=10;
    fun(a)=25;
    cout<<a<<endl;

    return 0;
}
