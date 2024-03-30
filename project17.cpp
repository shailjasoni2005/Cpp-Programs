#include <iostream>

using namespace std;
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
    
}

int main()
{
    int a;
    //factorial of a number:
    cout<<"enter a no.";
    cin>>a;
    cout<<"\n The factorial of "<<a<<" is "<<factorial(a)<<endl;

    return 0;
}
