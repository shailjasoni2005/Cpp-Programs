#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    float discount;
    int amount;
    cin>>amount;
    if(amount >=5000)
    {
        discount= (float)amount*0.20;
        cout<<"Discount is: "<<discount<<endl;
        exit;
    }
    else if(amount>=2000 && amount<5000)
    {
        discount= (float)amount*0.1;
        cout<<"Discount is: "<<discount<<endl;
        exit;
    }
    
    else
    {
        discount= (float)amount*0.05;
        cout<<"Discount is: "<<discount<<endl;
        exit;
    }
    }

    return 0;
}
