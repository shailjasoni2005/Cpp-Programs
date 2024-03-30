#include <iostream>

using namespace std;

int main()
{
    //what are pointers?
    //pointers are the data types which holds the address of other data types.
    int a=3;
    int* b = &a;
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<*b;

    return 0;
}