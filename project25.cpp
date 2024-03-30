#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    float a,b,c,r1,r2;
    cout<<"Enter coefficients of quadratic equation: ";
    cin>>a>>b>>c;
    
    int d=(b*b)-(4*a*c);
    
    r1 = (-b - sqrt(d)) / (2 * a);
    r2 = (-b + sqrt(d)) / (2 * a);

    
    cout<<r1<<endl;
    cout<<r2;

    return 0;
}
