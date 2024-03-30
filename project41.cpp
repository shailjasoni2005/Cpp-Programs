#include <iostream>

using namespace std;

int main()
{
    int n,m,r,sum=0;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }
    if(sum==m)
    {
        cout<<"it is an armstrong no."<<endl;
    }
    else
    {
        cout<<"it is not an armstrong no."<<endl;
    }

    return 0;
}
