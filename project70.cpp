#include<iostream>
using namespace std;

// Write a Max() function template for 2 numbers
template <class T>
T Max(T x, T y)
{
    return x>y?x:y;
}

int main()
{
    cout << Max(10, 5) << endl;
    cout << Max(12.5f, 17.3f) << endl;

    return 0;
}
