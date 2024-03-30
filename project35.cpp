#include <iostream>

using namespace std;

int main()
{
    int year;
    cin>>year;
    
    
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                cout<<"this is a leap year"<<endl;
            }
            else
            {
                cout<<"this is not a leap year"<<endl;
            }
        }
        
        else
        {
        cout<<"This is a leap year"<<endl;
        }
    }
    


    return 0;
}
