#include <iostream>

using namespace std;

void MonthName(int m)
{
    if(m == 1){
        cout<<"January"<<endl;
    }
    
    else if(m==2)
    {
        cout<<"Febraury"<<endl;
    }
    else if(m==3)
    {
        cout<<"March"<<endl;
    }
    else if(m==4)
    {
        cout<<"April"<<endl;
    }
    else if(m==5)
    {
        cout<<"May"<<endl;
    }
    else if(m==6)
    {
        cout<<"June"<<endl;
    }
    else if(m==7)
    {
        cout<<"July"<<endl;
    }
    else if(m==8)
    {
        cout<<"August"<<endl;
    }
    else if(m==9)
    {
        cout<<"September"<<endl;
    }
    else if(m==10)
    {
        cout<<"October"<<endl;
    }
    else if(m==11)
    {
        cout<<"November"<<endl;
    }
    else if(m==12)
    {
        cout<<"December"<<endl;
    }
    
}


int main()
{
    int m;
    cout<<"Enter 1 for january "<<endl;
    cout<<"Enter 2 for Febraury "<<endl;
    cout<<"Enter 3 for March "<<endl;
    cout<<"Enter 4 for April "<<endl;
    cout<<"Enter 5 for May "<<endl;
    cout<<"Enter 6 for June "<<endl;
    cout<<"Enter 7 for July "<<endl;
    cout<<"Enter 8 for August "<<endl;
    cout<<"Enter 9 for September "<<endl;
    cout<<"Enter 10 for October "<<endl;
    cout<<"Enter 11 for November "<<endl;
    cout<<"Enter 12 for December "<<endl;
    cin>>m;
    MonthName(m);

    return 0;
}
