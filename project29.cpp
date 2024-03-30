#include <iostream>

using namespace std;

int main()
{
    int m1,m2,m3,total;
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    float avg;
    avg=(float)total / (3.0);
    cout<<avg<<endl;
    if(avg>=60)
    {
        cout<<"A"<<endl;
    }
    
    else if(avg>=35 && avg<=60)
    {
        cout<<"B"<<endl;
    }
    
    else
    {
        cout<<"C"<<endl;
    }

    return 0;
}
