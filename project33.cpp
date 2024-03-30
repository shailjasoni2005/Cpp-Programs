#include <iostream>

using namespace std;

void Digitno(int m)
{
    if(m == 1){
        cout<<"one"<<endl;
    }
    
    else if(m==2)
    {
        cout<<"two"<<endl;
    }
    else if(m==3)
    {
        cout<<"three"<<endl;
    }
    else if(m==4)
    {
        cout<<"four"<<endl;
    }
    else if(m==5)
    {
        cout<<"five"<<endl;
    }
    else if(m==6)
    {
        cout<<"six"<<endl;
    }
    else if(m==7)
    {
        cout<<"seven"<<endl;
    }
    else if(m==8)
    {
        cout<<"eight"<<endl;
    }
    else if(m==9)
    {
        cout<<"nine"<<endl;
    }
    else if(m==0)
    {
        cout<<"zero"<<endl;
    }
    else
    {
        cout<<"sorry..!"<<endl;
    }
    
}


int main()
{
    int m;
    cout<<"Enter any no. from 0 to 9: ";
    
    cin>>m;
    Digitno(m);

    return 0;
}
