#include <iostream>

using namespace std;

int main()
{
    int n,m,r,rev=0;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==m)
    {
        cout<<"It is a palindrome no.";
    }
    else
    {
        cout<<"It is not a palindrome no.";
    }
        
    return 0;
}
