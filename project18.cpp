#include <iostream>

using namespace std;
int fibb(int n)
{
    if(n<2)
    {
        return 1;
    }
    else
    {
        return fibb(n-2) + fibb(n-1);
    }
    
}

int main()
{
    int a;
    //fibbonacchi series:
    cout<<"enter a no.";
    cin>>a;
    cout<<"\n The fibbonacchi sequence  of term "<<a<<" is "<<fibb(a)<<endl;

    return 0;
}

