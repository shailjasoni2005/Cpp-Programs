#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c;
    float r1,r2;
    cout<<"Enter coefficients of quadratic equation: ";
    cin>>a>>b>>c;
    
    r1= -b + sqrt((b*b)-(4*a*c));
    r2= -b - sqrt((b*b)-(4*a*c));
    
    int d=(b*b)-(4*a*c);
    if(d==0)
    {
        cout<<"Roots are real and equal"<<(-b)/(2*a)<<endl;
    }
    
    if(d>0)
    {
        cout<<"Roots are real but unequal "<<r1/(2*a)<<endl;
    }
    
    if(d<0)
    {
        cout<<"Roots are imaginary "<<r2/(2*a)<<endl;
    }
}

