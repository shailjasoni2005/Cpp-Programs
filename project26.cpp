#include <iostream>

using namespace std;

int main()
{
    int s,u,t,a,v;
    cout<<"Enter initial velocity: ";
    cin>>u;
    cout<<"\nEnter final velocity: ";
    cin>>v;
    cout<<"\nEnter acceleration: ";
    cin>>a;
    cout<<"\nEnter time";
    cin>>t;
    
    s= (u*t) + ((1/2)*a*t*t) + (v*t);
    cout<<"Distance is: "<<s;

    return 0;
}
