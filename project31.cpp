#include<iostream>
using namespace std;

void Dayname(int day)
{
    if(day==1)
    {
        cout<<"sun"<<endl;
    }
    else if(day==2)
    {
        cout<<"mon"<<endl;
    }
    else if(day==3)
    {
        cout<<"tue"<<endl;
    }
    else if(day==4)
    {
        cout<<"wed"<<endl;
    }
    else if(day==5)
    {
        cout<<"thu"<<endl;
    }
    else if(day==6)
    {
        cout<<"fri"<<endl;
    }
    else if(day==7)
    {
        cout<<"sat"<<endl;
    }
    
    else
    {
        cout<<"Wrong no."<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter 1 for sunday "<<endl;
   
    cout<<"Enter 2 for monday "<<endl;
  
    cout<<"Enter 3 for tuesday "<<endl;
 
    cout<<"Enter 4 for wednesday "<<endl;
  
    cout<<"Enter 5 for thursday "<<endl;
 
    cout<<"Enter 6 for friday "<<endl;
  
    cout<<"Enter 7 for saturday "<<endl;
    cin>>n;
    Dayname(n);
}
